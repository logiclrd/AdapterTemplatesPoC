using System;

using Adapter;

namespace Validator
{
	public class ModelValidator
	{
		public string Validate(IAdapter adapter)
		{
			if (adapter.Volume > 11)
				return "Volume only goes up to 11";
			if (adapter.Quantity < 0)
				return "Antimatter is not supported in this version, please do not use negative quantity";

			return "Validation passed";
		}
	}
}
