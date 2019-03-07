using System;

using Database;
using Domain;
using Adapter;
using Validator;

namespace FrontEnd
{
	class Program
	{
		static void Main(string[] args)
		{
			var databaseModel = new DatabaseModel();

			databaseModel.Volume = 12;
			databaseModel.Quantity = 6;

			var domainModel = new DomainModel();

			domainModel.Volume = 6;
			domainModel.Quantity = -42;

			var validator = new ModelValidator();

			Console.WriteLine("Database model: {0}", validator.Validate(new DatabaseAdapter(databaseModel)));
			Console.WriteLine("Domain model: {0}", validator.Validate(new DomainAdapter(domainModel)));
		}
	}
}
