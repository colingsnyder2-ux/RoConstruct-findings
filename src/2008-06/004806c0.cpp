// from server: 71% by colin
// roc 2008-06 004806c0  unit: G3D::Win32Window  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004806c0

extern "C" int __cdecl _ftol2_sse_helper();

struct G3D_Win32Window {
    int* data;
    int  size;
    int  capacity;
    void reserve(int newCapacity);
    void resize(int newSize);
};

extern float g_float_81e380;
extern float g_float_81e37c;
extern float g_float_81c434;
extern int   g_int_96f7c0;
extern int   g_int_96f7c4;

void G3D_Win32Window::resize(int newSize)
{
    int oldSize = this->size;
    this->size = newSize;

    if ((g_int_96f7c4 & 1) == 0) {
        g_int_96f7c4 |= 1;
        g_int_96f7c0 = 10;
    }

    int cap = this->capacity;
    int sz = this->size;

    if (sz > cap) {
        if (cap == 0) {
            this->capacity = newSize;
            this->reserve(oldSize);
        } else if (sz < g_int_96f7c0) {
            this->capacity = g_int_96f7c0;
            this->reserve(oldSize);
        } else {
            float f = g_float_81e380;
            unsigned int bytes = (unsigned int)cap * 12;
            if (bytes > 0x61a80) {
                f = g_float_81e37c;
            } else if (bytes > 0xfa00) {
                f = g_float_81c434;
            }
            int scaled = (int)(f * (float)cap);
            int newCap = scaled - cap + sz;
            this->capacity = newCap;
            if (newCap < g_int_96f7c0) {
                this->capacity = g_int_96f7c0;
            }
            this->reserve(oldSize);
        }
    } else {
        int third = cap / 3;
        if (sz <= third) {
            goto done;
        }
        if (newSize == 0) {
            goto done;
        }
        if (sz <= g_int_96f7c0) {
            goto done;
        }
        if (sz < oldSize) {
            oldSize = sz;
        }
        this->reserve(oldSize);
    }

done:
    if (oldSize < this->size) {
        int idx = oldSize;
        int offset = oldSize * 12;
        while (idx < this->size) {
            char* p = (char*)this->data + offset;
            if (p) {
                *(int*)(p + 0) = 0;
                *(int*)(p + 4) = 0;
                *(char*)(p + 8) = 0;
            }
            idx++;
            offset += 12;
        }
    }
}
