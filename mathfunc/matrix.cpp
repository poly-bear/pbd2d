#include <iostream>
#include <cstdint>
#include <cmath>

#include "mathfunc/vec.hpp"
#include "mathfunc/matrix.hpp"

template class mat3<float>;
template class mat3<double>;

//standard io

template std::ostream &operator<<(std::ostream &os, const mat3<float> &mat);
template std::ostream &operator<<(std::ostream &os, const mat3<double> &mat);

template <class T> std::ostream &operator<<(std::ostream &os, const mat3<T> &mat)
{
		for (uint32_t i = 0; i < 3; i++)
		{
				for (uint32_t j = 0; j < 3; j++)
				{
						os << mat.m[i * 3 + j] << " ";
				}
				os << std::endl;
		}
		return os;
}

//static function

//------------------

template class mat2<float>;
template class mat2<double>;

template <class T> mat2<T>::mat2(const double &omega)
{
		float cos = std::cos(omega);
		float sin = std::sin(omega);

		m[0] = cos;
		m[1] = -sin;
		m[2] = sin;
		m[3] = cos;
}

//standard io

template std::ostream &operator<<(std::ostream &os, const mat2<float> &mat);
template std::ostream &operator<<(std::ostream &os, const mat2<double> &mat);

template <class T> std::ostream &operator<<(std::ostream &os, const mat2<T> &mat)
{
		for (uint32_t i = 0; i < 2; i++)
		{
				for (uint32_t j = 0; j < 2; j++)
				{
						os << mat.m[i * 2 + j] << " ";
				}
				os << std::endl;
		}
		return os;
}
