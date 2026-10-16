// from server: 43% by colin
struct Matrix3 {
    float elements[9];
};

struct GCamera {
    Matrix3 projectionMatrix;
    Matrix3 viewMatrix;
};

extern float g_fov;
extern float g_near;
extern float g_far;

extern char g_initFlags;

extern "C" void __cdecl Matrix3_ctor(Matrix3* self, float a, float b, float c);
extern "C" void __cdecl Matrix3_assign(Matrix3* self, const Matrix3* other);
extern "C" void __cdecl GCamera_init();

struct Message {
    int getCameraIndex() const;
};

int Message::getCameraIndex() const {
    static Matrix3 defaultProj;
    static Matrix3 defaultView;
    static GCamera defaultCamera;
    static int initialized = -1;

    if (!(g_initFlags & 1)) {
        g_initFlags |= 1;
        Matrix3_ctor(&defaultProj, 0.0f, g_fov, g_near);
        initialized = -1;
    }

    if (!(g_initFlags & 2)) {
        g_initFlags |= 2;
        Matrix3_ctor(&defaultView, g_fov, 0.0f, g_far);
        initialized = -1;
    }

    if (!(g_initFlags & 4)) {
        g_initFlags |= 4;
        Matrix3_assign(&defaultCamera.projectionMatrix, &defaultProj);
        initialized = -1;
    }

    if (!(g_initFlags & 8)) {
        g_initFlags |= 8;
        Matrix3_assign(&defaultCamera.viewMatrix, &defaultView);
        initialized = -1;
    }

    switch (initialized) {
    case 0:
        return (int)&defaultProj;
    case 1:
        return (int)&defaultView;
    case 2:
        return (int)&defaultCamera.projectionMatrix;
    case 3:
        return (int)&defaultCamera.viewMatrix;
    default:
        GCamera_init();
        return 0;
    }
}
