// from server: 62% by colin
struct VVector3 {
    float x;
    float y;
    float z;
};

struct String {
    void* rep;
    String(const char*);
    ~String();
};

extern "C" {
    void* __stdcall GetCurrentThreadId();
    void* __stdcall GetCurrentProcess();
    void* __stdcall GetCurrentThread();
    void* __stdcall GetCurrentProcessId();
}

struct G3D {
    struct VVector3 {
        float x;
        float y;
        float z;
    };
};

struct XItem {
    bool convertToValue(G3D::VVector3* out) const;
};

bool XItem::convertToValue(G3D::VVector3* out) const
{
    G3D::VVector3 tmp;
    tmp.x = 0.0f;
    tmp.y = 0.0f;
    tmp.z = 0.0f;
    String s("L$4d");
    bool result = false;
    result = ((const XItem*)this)->convertToValue(&tmp);
    if (result) {
        out->x = tmp.x;
        out->y = tmp.y;
        out->z = tmp.z;
    } else {
        out->x = 0.0f;
        out->y = 0.0f;
        out->z = 0.0f;
    }
    return result;
}
