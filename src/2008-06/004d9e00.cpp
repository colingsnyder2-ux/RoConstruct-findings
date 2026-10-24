// from server: 29% by colin
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lang: cpp
// roc-lib: rbxgs v8datamodel/Sky.cpp

// Candidate translation unit (score above; library headers required).
#include "v8datamodel/Sky.h"
#include <G3D/GImage.h>

static std::string testImage(const std::string& file, G3D::GImage& master)
{
	G3D::GImage image;
	image.load(file);

	if (image.width != master.width)
		throw std::runtime_error("skybox images have different widths");

	if (image.height != master.height)
		throw std::runtime_error("skybox images have different heights");

	if (image.channels != master.channels)
		throw std::runtime_error("skybox images have different numbers of channels");

	return file;
}

namespace RBX
{
	Sky::Sky()
		: drawCelestialBodies(true),
		  numStars(3000)
	{
		setName("Sky");

		skyUp = ContentId::fromAssets("Sky\\null_plainsky512_up.jpg");
		skyLf = ContentId::fromAssets("Sky\\null_plainsky512_lf.jpg");
		skyRt = ContentId::fromAssets("Sky\\null_plainsky512_rt.jpg");
		skyBk = ContentId::fromAssets("Sky\\null_plainsky512_bk.jpg");
		skyFt = ContentId::fromAssets("Sky\\null_plainsky512_ft.jpg");
		skyDn = ContentId::fromAssets("Sky\\null_plainsky512_dn.jpg");
	}
}
