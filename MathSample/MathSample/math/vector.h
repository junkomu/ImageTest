#pragma once

#include <string>

namespace moon
{
	namespace math
	{
		class Vector
		{
		public:
			Vector() { }
			~Vector() {}

			std::string getString();

		private:
			float			x, y, z;
		};
	}
}
