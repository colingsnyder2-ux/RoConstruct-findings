// from server: 98% by colin
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
extern int G3D_ray_inf_init_flag;
extern int G3D_ray_inf_ptr;

void __fastcall sub_475050(void* p);
void __fastcall sub_506b40(Ray* self, float f);

Ray::Ray()
{
    vtable = (void*)0x7a060c;
    sub_475050(&m_invDirection);
    m_origin.z = G3D_ray_epsilon;
    if (!(G3D_ray_inf_init_flag & 1)) {
        G3D_ray_inf_init_flag |= 1;
        G3D_ray_inf_d = *(double*)G3D_ray_inf_ptr;
    }
    m_direction.x = (float)G3D_ray_inf_d;
    sub_506b40(this, G3D_ray_inf);
}
