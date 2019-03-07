#pragma once

#include "IAdapter.h"

using namespace System;

namespace Adapter
{
	template <typename T>
	public ref class AdapterBase : public IAdapter
	{
		T _wrapped;
	public:
		AdapterBase(T toWrap)
			: _wrapped(toWrap)
		{
		}

		property int Volume
		{
			virtual int get() { return _wrapped->Volume; }
		}

		property int Quantity
		{
			virtual int get() { return _wrapped->Quantity; }
		}
	};
}
