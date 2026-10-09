// from server: 96% by colin
// roc 2007-08 00506dd0  unit: G3D::Ray  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506dd0
//
// 00506dd0  56                   push esi
// 00506dd1  8bf1                 mov esi, ecx
// 00506dd3  8d4e14               lea ecx, [esi + 0x14]
// 00506dd6  c7060c067a00         mov dword ptr [esi], 0x7a060c
// 00506ddc  e86fe2f6ff           call 0x475050
// 00506de1  d905b07e7900         fld dword ptr [0x797eb0]
// 00506de7  b801000000           mov eax, 1
// 00506dec  d95e0c               fstp dword ptr [esi + 0xc]
// 00506def  840508d18b00         test byte ptr [0x8bd108], al
// 00506df5  7513                 jne 0x506e0a
// 00506df7  090508d18b00         or dword ptr [0x8bd108], eax
// 00506dfd  a164e57700           mov eax, dword ptr [0x77e564]
// 00506e02  dd00                 fld qword ptr [eax]
// 00506e04  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00506e0a  dd0500d18b00         fld qword ptr [0x8bd100]
// 00506e10  51                   push ecx
// 00506e11  d95e10               fstp dword ptr [esi + 0x10]
// 00506e14  8bce                 mov ecx, esi
// 00506e16  d90510067a00         fld dword ptr [0x7a0610]
// 00506e1c  d91c24               fstp dword ptr [esp]
// 00506e1f  e81cfdffff           call 0x506b40
// 00506e24  8bc6                 mov eax, esi
// 00506e26  5e                   pop esi
// 00506e27  c3                   ret 

struct Vector3 {
    float x, y, z;
};

struct Ray {
    void* vtable;
    Vector3 m_origin;
    Vector3 m_direction;
    Vector3 m_invDirection;
    void set(const Vector3& origin, const Vector3& direction);
    Ray();
};

extern float G3D_ray_epsilon;
extern float G3D_ray_inf;
extern double G3D_ray_inf_d;
extern int G3D_ray_inf_init;
extern int G3D_ray_inf_init_flag;
extern int G3D_ray_inf_ptr;

void __fastcall sub_475050(void* p);
void __fastcall sub_506b40(Ray* self, float f);

Ray::Ray()
{
    vtable = (void*)0x7a060c;
    sub_475050(&m_origin);
    m_direction.x = G3D_ray_epsilon;
    if (!(G3D_ray_inf_init_flag & 1)) {
        G3D_ray_inf_init_flag |= 1;
        G3D_ray_inf_d = *(double*)G3D_ray_inf_ptr;
    }
    m_direction.y = (float)G3D_ray_inf_d;
    sub_506b40(this, G3D_ray_inf);
}
