// roc 2009-06 006b3400  unit: RBX::BlockBlockContact  size: 617 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b3400
//
// 006b3400  a170fca400           mov eax, dword ptr [0xa4fc70]
// 006b3405  8b1584e68900         mov edx, dword ptr [0x89e684]
// 006b340b  83ec24               sub esp, 0x24
// 006b340e  a801                 test al, 1
// 006b3410  7512                 jne 0x6b3424
// 006b3412  83c801               or eax, 1
// 006b3415  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b341a  d902                 fld dword ptr [edx]
// 006b341c  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b3422  eb06                 jmp 0x6b342a
// 006b3424  d9056cfca400         fld dword ptr [0xa4fc6c]
// 006b342a  a801                 test al, 1
// 006b342c  7528                 jne 0x6b3456
// 006b342e  83c801               or eax, 1
// 006b3431  ddd8                 fstp st(0)
// 006b3433  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b3438  d902                 fld dword ptr [edx]
// 006b343a  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b3440  a801                 test al, 1
// 006b3442  7512                 jne 0x6b3456
// 006b3444  83c801               or eax, 1
// 006b3447  ddd8                 fstp st(0)
// 006b3449  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b344e  d902                 fld dword ptr [edx]
// 006b3450  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b3456  d954240c             fst dword ptr [esp + 0xc]
// 006b345a  d9542410             fst dword ptr [esp + 0x10]
// 006b345e  d9c0                 fld st(0)
// 006b3460  d9542414             fst dword ptr [esp + 0x14]
// 006b3464  a801                 test al, 1
// 006b3466  7544                 jne 0x6b34ac
// 006b3468  83c801               or eax, 1
// 006b346b  ddd9                 fstp st(1)
// 006b346d  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b3472  d902                 fld dword ptr [edx]
// 006b3474  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b347a  d9c9                 fxch st(1)
// 006b347c  a801                 test al, 1
// 006b347e  752c                 jne 0x6b34ac
// 006b3480  83c801               or eax, 1
// 006b3483  ddd9                 fstp st(1)
// 006b3485  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b348a  d902                 fld dword ptr [edx]
// 006b348c  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b3492  d9c9                 fxch st(1)
// 006b3494  a801                 test al, 1
// 006b3496  7514                 jne 0x6b34ac
// 006b3498  83c801               or eax, 1
// 006b349b  ddd9                 fstp st(1)
// 006b349d  a370fca400           mov dword ptr [0xa4fc70], eax
// 006b34a2  d902                 fld dword ptr [edx]
// 006b34a4  d9156cfca400         fst dword ptr [0xa4fc6c]
// 006b34aa  d9c9                 fxch st(1)
// 006b34ac  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006b34b0  d9c9                 fxch st(1)
// 006b34b2  d9e0                 fchs 
// 006b34b4  56                   push esi
// 006b34b5  8b742434             mov esi, dword ptr [esp + 0x34]
// 006b34b9  d9542404             fst dword ptr [esp + 4]
// 006b34bd  d9542408             fst dword ptr [esp + 8]
// 006b34c1  57                   push edi
// 006b34c2  d9542410             fst dword ptr [esp + 0x10]
// 006b34c6  33ff                 xor edi, edi
// 006b34c8  8bc7                 mov eax, edi
// 006b34ca  c1e802               shr eax, 2
// 006b34cd  8d0440               lea eax, [eax + eax*2]
// 006b34d0  d90481               fld dword ptr [ecx + eax*4]
// 006b34d3  8bc7                 mov eax, edi
// 006b34d5  d1e8                 shr eax, 1
// 006b34d7  2501000080           and eax, 0x80000001
// 006b34dc  7905                 jns 0x6b34e3
// 006b34de  48                   dec eax
// 006b34df  83c8fe               or eax, 0xfffffffe
// 006b34e2  40                   inc eax
// 006b34e3  8d0440               lea eax, [eax + eax*2]
// 006b34e6  d9448104             fld dword ptr [ecx + eax*4 + 4]
// 006b34ea  8bc7                 mov eax, edi
// 006b34ec  83e001               and eax, 1
// 006b34ef  8d0440               lea eax, [eax + eax*2]
// 006b34f2  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 006b34f6  d94204               fld dword ptr [edx + 4]
// 006b34f9  d8ca                 fmul st(2)
// 006b34fb  d94208               fld dword ptr [edx + 8]
// 006b34fe  d8ca                 fmul st(2)
// 006b3500  dec1                 faddp st(1)
// 006b3502  d902                 fld dword ptr [edx]
// 006b3504  d8cc                 fmul st(4)
// 006b3506  dec1                 faddp st(1)
// 006b3508  d84224               fadd dword ptr [edx + 0x24]
// 006b350b  d94210               fld dword ptr [edx + 0x10]
// 006b350e  d8cb                 fmul st(3)
// 006b3510  d9420c               fld dword ptr [edx + 0xc]
// 006b3513  d8cd                 fmul st(5)
// 006b3515  dec1                 faddp st(1)
// 006b3517  d94214               fld dword ptr [edx + 0x14]
// 006b351a  d8cb                 fmul st(3)
// 006b351c  dec1                 faddp st(1)
// 006b351e  d84228               fadd dword ptr [edx + 0x28]
// 006b3521  d94218               fld dword ptr [edx + 0x18]
// 006b3524  decd                 fmulp st(5)
// 006b3526  d9cb                 fxch st(3)
// 006b3528  d84a1c               fmul dword ptr [edx + 0x1c]
// 006b352b  dec4                 faddp st(4)
// 006b352d  d9c9                 fxch st(1)
// 006b352f  d84a20               fmul dword ptr [edx + 0x20]
// 006b3532  dec3                 faddp st(3)
// 006b3534  d9ca                 fxch st(2)
// 006b3536  d8422c               fadd dword ptr [edx + 0x2c]
// 006b3539  d9ca                 fxch st(2)
// 006b353b  d86624               fsub dword ptr [esi + 0x24]
// 006b353e  d9c9                 fxch st(1)
// 006b3540  d86628               fsub dword ptr [esi + 0x28]
// 006b3543  d9ca                 fxch st(2)
// 006b3545  d8662c               fsub dword ptr [esi + 0x2c]
// 006b3548  d94618               fld dword ptr [esi + 0x18]
// 006b354b  d8c9                 fmul st(1)
// 006b354d  d9460c               fld dword ptr [esi + 0xc]
// 006b3550  d8cc                 fmul st(4)
// 006b3552  dec1                 faddp st(1)
// 006b3554  d906                 fld dword ptr [esi]
// 006b3556  d8cb                 fmul st(3)
// 006b3558  dec1                 faddp st(1)
// 006b355a  d9542420             fst dword ptr [esp + 0x20]
// 006b355e  d9461c               fld dword ptr [esi + 0x1c]
// 006b3561  d8ca                 fmul st(2)
// 006b3563  d94610               fld dword ptr [esi + 0x10]
// 006b3566  d8cd                 fmul st(5)
// 006b3568  dec1                 faddp st(1)
// 006b356a  d9c3                 fld st(3)
// 006b356c  d84e04               fmul dword ptr [esi + 4]
// 006b356f  dec1                 faddp st(1)
// 006b3571  d9542424             fst dword ptr [esp + 0x24]
// 006b3575  d94608               fld dword ptr [esi + 8]
// 006b3578  decc                 fmulp st(4)
// 006b357a  d94620               fld dword ptr [esi + 0x20]
// 006b357d  decb                 fmulp st(3)
// 006b357f  d9cb                 fxch st(3)
// 006b3581  dec2                 faddp st(2)
// 006b3583  d94614               fld dword ptr [esi + 0x14]
// 006b3586  decc                 fmulp st(4)
// 006b3588  d9c9                 fxch st(1)
// 006b358a  dec3                 faddp st(3)
// 006b358c  d9ca                 fxch st(2)
// 006b358e  d9542428             fst dword ptr [esp + 0x28]
// 006b3592  d8d4                 fcom st(4)
// 006b3594  dfe0                 fnstsw ax
// 006b3596  dddc                 fstp st(4)
// 006b3598  f6c441               test ah, 0x41
// 006b359b  8d44241c             lea eax, [esp + 0x1c]
// 006b359f  7404                 je 0x6b35a5
// 006b35a1  8d442428             lea eax, [esp + 0x28]
// 006b35a5  d900                 fld dword ptr [eax]
// 006b35a7  d9c9                 fxch st(1)
// 006b35a9  d8542418             fcom dword ptr [esp + 0x18]
// 006b35ad  dfe0                 fnstsw ax
// 006b35af  f6c441               test ah, 0x41
// 006b35b2  8d442418             lea eax, [esp + 0x18]
// 006b35b6  7404                 je 0x6b35bc
// 006b35b8  8d442424             lea eax, [esp + 0x24]
// 006b35bc  d900                 fld dword ptr [eax]
// 006b35be  d9cb                 fxch st(3)
// 006b35c0  d8542414             fcom dword ptr [esp + 0x14]
// 006b35c4  dfe0                 fnstsw ax
// 006b35c6  f6c441               test ah, 0x41
// 006b35c9  8d442414             lea eax, [esp + 0x14]
// 006b35cd  7404                 je 0x6b35d3
// 006b35cf  8d442420             lea eax, [esp + 0x20]
// 006b35d3  d900                 fld dword ptr [eax]
// 006b35d5  d95c2414             fstp dword ptr [esp + 0x14]
// 006b35d9  d9cb                 fxch st(3)
// 006b35db  d95c2418             fstp dword ptr [esp + 0x18]
// 006b35df  d9c9                 fxch st(1)
// 006b35e1  d954241c             fst dword ptr [esp + 0x1c]
// 006b35e5  d9cc                 fxch st(4)
// 006b35e7  d8db                 fcomp st(3)
// 006b35e9  dfe0                 fnstsw ax
// 006b35eb  ddda                 fstp st(2)
// 006b35ed  f6c405               test ah, 5
// 006b35f0  8d442410             lea eax, [esp + 0x10]
// 006b35f4  7b04                 jnp 0x6b35fa
// 006b35f6  8d442428             lea eax, [esp + 0x28]
// 006b35fa  d900                 fld dword ptr [eax]
// 006b35fc  d944240c             fld dword ptr [esp + 0xc]
// 006b3600  d8db                 fcomp st(3)
// 006b3602  dfe0                 fnstsw ax
// 006b3604  ddda                 fstp st(2)
// 006b3606  f6c441               test ah, 0x41
// 006b3609  8d44240c             lea eax, [esp + 0xc]
// 006b360d  7404                 je 0x6b3613
// 006b360f  8d442424             lea eax, [esp + 0x24]
// 006b3613  d900                 fld dword ptr [eax]
// 006b3615  d9442408             fld dword ptr [esp + 8]
// 006b3619  d8da                 fcomp st(2)
// 006b361b  dfe0                 fnstsw ax
// 006b361d  ddd9                 fstp st(1)
// 006b361f  f6c441               test ah, 0x41
// 006b3622  8d442408             lea eax, [esp + 8]
// 006b3626  7404                 je 0x6b362c
// 006b3628  8d442420             lea eax, [esp + 0x20]
// 006b362c  d900                 fld dword ptr [eax]
// 006b362e  47                   inc edi
// 006b362f  83ff08               cmp edi, 8
// 006b3632  d95c2408             fstp dword ptr [esp + 8]
// 006b3636  d95c240c             fstp dword ptr [esp + 0xc]
// 006b363a  d9542410             fst dword ptr [esp + 0x10]
// 006b363e  0f8c84feffff         jl 0x6b34c8
// 006b3644  8b742430             mov esi, dword ptr [esp + 0x30]
// 006b3648  ddd9                 fstp st(1)
// 006b364a  8d4c2408             lea ecx, [esp + 8]
// 006b364e  ddd8                 fstp st(0)
// 006b3650  51                   push ecx
// 006b3651  8d542418             lea edx, [esp + 0x18]
// 006b3655  52                   push edx
// 006b3656  56                   push esi
// 006b3657  e8d4fcffff           call 0x6b3330
// 006b365c  83c40c               add esp, 0xc
// 006b365f  5f                   pop edi
// 006b3660  8bc6                 mov eax, esi
// 006b3662  5e                   pop esi
// 006b3663  83c424               add esp, 0x24
// 006b3666  c20c00               ret 0xc
// copied from an identical function in another client (function ?express@Extents@RBX@@QAE?AV12@ABVCoordinateFrame@G3D@@0@Z)

// from server: 100% by EspClaude
// claude-opus-5-5 G3: row1 of pointToWorldSpace read into named locals (m10,m11,m12,t1) fixes fp:fast pair order
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lang: cpp
#include <limits>
#include <algorithm>
namespace G3D {
template <class T> inline T min(const T& x, const T& y) { return std::min<T>(x, y); }
template <class T> inline T max(const T& x, const T& y) { return std::max<T>(x, y); }
class Vector3 {
public:
    float x, y, z;
    Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
    Vector3(float fX, float fY, float fZ) : x(fX), y(fY), z(fZ) {}
    Vector3(const Vector3& V) : x(V.x), y(V.y), z(V.z) {}
    Vector3& operator= (const Vector3& r) { x = r.x; y = r.y; z = r.z; return *this; }
    const float& operator[] (int i) const { return ((float*)this)[i]; }
    float& operator[] (int i) { return ((float*)this)[i]; }
    Vector3 min(const Vector3 &v) const { return Vector3(G3D::min(v.x, x), G3D::min(v.y, y), G3D::min(v.z, z)); }
    Vector3 max(const Vector3 &v) const { return Vector3(G3D::max(v.x, x), G3D::max(v.y, y), G3D::max(v.z, z)); }
};
class Matrix3 {
public:
    float elt[3][3];
    float* operator[] (int iRow) { return (float*)&elt[iRow][0]; }
    const float* operator[] (int iRow) const { return (const float*)&elt[iRow][0]; }
};
class CoordinateFrame {
public:
    Matrix3 rotation;
    Vector3 translation;
    Vector3 pointToWorldSpace(const Vector3& v) const {
        float m10 = rotation[1][0];
        float m11 = rotation[1][1];
        float m12 = rotation[1][2];
        float t1 = translation[1];
        return Vector3(
			rotation[0][0] * v[0] + rotation[0][1] * v[1] + rotation[0][2] * v[2] + translation[0],
			m10 * v[0] + m11 * v[1] + m12 * v[2] + t1,
			rotation[2][0] * v[0] + rotation[2][1] * v[1] + rotation[2][2] * v[2] + translation[2]);
    }
	Vector3 pointToObjectSpace(const Vector3& v) const {
		float p[3];
		p[0] = v[0] - translation[0];
		p[1] = v[1] - translation[1];
		p[2] = v[2] - translation[2];
		return Vector3(
			rotation[0][0] * p[0] + rotation[1][0] * p[1] + rotation[2][0] * p[2],
			rotation[0][1] * p[0] + rotation[1][1] * p[1] + rotation[2][1] * p[2],
			rotation[0][2] * p[0] + rotation[1][2] * p[1] + rotation[2][2] * p[2]);
    }
};
}
namespace RBX {
using G3D::Vector3;
using G3D::CoordinateFrame;
class Math { public:
	static const float& inf() { static const float i = std::numeric_limits<float>::infinity(); return i; }
};
class Extents {
public:
	Extents() {}
	static Extents vv(const Vector3& v0, const Vector3& v1);
	Vector3 getCorner(int index) const;
	Extents express(const CoordinateFrame& from, const CoordinateFrame& to);
	Vector3 low, high;
};
Vector3 Extents::getCorner(int i) const
{
	const Vector3* corners = &low;
	return Vector3(corners[i / 4].x, corners[i / 2 % 2].y, corners[i % 2].z);
}
Extents Extents::express(const CoordinateFrame& myFrame, const CoordinateFrame& expressInFrame)
{
	Vector3 minC(Math::inf(), Math::inf(), Math::inf());
	Vector3 maxC(-Math::inf(), -Math::inf(), -Math::inf());

	for (int i = 0; i < 8; ++i) {
		const Vector3 inOther = expressInFrame.pointToObjectSpace(myFrame.pointToWorldSpace(getCorner(i)));

		minC = minC.min(inOther);
		maxC = maxC.max(inOther);
	}

	return vv(minC, maxC);
}
}