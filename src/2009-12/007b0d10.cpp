// roc 2009-12 007b0d10  unit: RBX::Ball  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b0d10
//
// 007b0d10  d94104               fld dword ptr [ecx + 4]
// 007b0d13  d80ddcf29a00         fmul dword ptr [0x9af2dc]
// 007b0d19  d9c0                 fld st(0)
// 007b0d1b  d8c9                 fmul st(1)
// 007b0d1d  dec9                 fmulp st(1)
// 007b0d1f  d80d142f9c00         fmul dword ptr [0x9c2f14]
// 007b0d25  c3                   ret 
// copied from an identical function in another client (function ?getGridVolume@Ball@RBX@@UBEMXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace G3D { class Vector3 { public: float x, y, z; }; }
namespace RBX {
namespace Math { inline float pi() { return 3.1415927f; } }
class Geometry {
protected:
	G3D::Vector3 gridSize;
public:
	virtual ~Geometry() {}
	virtual float getGridVolume() const;
};
class Ball : public Geometry {
	float realRadius;
public:
	virtual float getGridVolume() const;
};
float Ball::getGridVolume() const
{
	// volume of a sphere = 4/3 * pi * radius^3
	float radius = this->gridSize.x * 0.5f;
	return (4.0f/3.0f) * Math::pi() * radius * radius * radius;
}
}