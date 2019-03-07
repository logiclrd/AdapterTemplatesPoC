#pragma once
#include "AdapterBase.h"

namespace Adapter
{
	using namespace Domain;

	public ref class DomainAdapter :
		public AdapterBase<DomainModel^>
	{
	public:
		DomainAdapter(DomainModel^ toWrap)
			: AdapterBase(toWrap)
		{
		}
	};
}
