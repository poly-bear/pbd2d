#pragma once

#include "opengl/window.hpp"

Window visualizeinit();

double getTime();

class shader
{
		uint32_t program;

	  public:
		shader(const char *vsname, const char *fsname);

		void useprogram() const;
};
