#pragma once
#include "AdapterBase.h"

namespace Adapter
{
	using namespace Database;

	public ref class DatabaseAdapter :
		public AdapterBase<DatabaseModel ^>
	{
	public:
		DatabaseAdapter(DatabaseModel^ toWrap)
			: AdapterBase(toWrap)
		{
		}
	};
}
