// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_blocknativehollowf0d5220051dea82c.cpp

// Candidate translation unit (score above; library headers required).
#include "v8world/Block.h"
namespace RBX {
__declspec(noinline) G3D::Matrix3 Block::getMomentHollow(float mass) const
	{
		G3D::Vector3 grid = gridSize;
		G3D::Vector3 I;

		float area = ((grid.x * grid.z + grid.y * grid.z) + grid.x * grid.y) * 2;

		for (int i = 0; i < 3; i++)
		{
			float X = grid[(i    ) % 3];
			float Y = grid[(i + 1) % 3];
			float Z = grid[(i + 2) % 3];

			float scaling = mass / (2 * area);

			float temp = (Z*Z*Y)*X + (Y*Y*Y*Z)/3 + (Z*Z*Z*Y)/3 + (Y*Y*Z)*X + (X*Y*Y*Y)/3 + (X*Z*Z*Z)/3;

			I[i] = temp * scaling;
		}

		return Math::fromDiagonal(I);
	}

	
}