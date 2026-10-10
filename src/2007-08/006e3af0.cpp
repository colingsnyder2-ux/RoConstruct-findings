// from server: 47% by colin
struct CXTPDockingPaneSplitterWnd {
    char pad0[0x54];
    void* ptr54;
    void* ptr58;
    void* ptr5c;
    char pad60[0x30];
    int field90;

    int method(int a, int b);
};

struct Inner {
    char pad0[0x28];
    int field28;
};

struct ObjD4 {
    char pad0[0x28];
    Inner* ptr28;
};

struct ObjB0 {
    char pad0[0xb0];
    int fieldb0;
};

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall UnionRect(Rect* out, const Rect* a, const Rect* b);

extern "C" void* __fastcall sub_6e3660(CXTPDockingPaneSplitterWnd* self);
extern "C" void __fastcall sub_6e04a0(void* self, Rect* out);

int CXTPDockingPaneSplitterWnd::method(int a, int b) {
    void* edi = sub_6e3660(this);
    if (edi == 0) {
        return 0;
    }
    void* ecx54 = this->ptr54;
    ObjD4* ediD4 = (ObjD4*)((char*)edi + 0xd4);
    int ebx = *(int*)((char*)ecx54 + 0x90);
    void* ecx58 = this->ptr58;
    int ebp = ediD4->ptr28->field28;
    int savedEbp = ebp;
    if (ecx58 == 0) {
        return 0;
    }
    if (this->ptr5c == 0) {
        return 0;
    }
    Rect r24;
    sub_6e04a0(this->ptr58, &r24);
    Rect r14;
    sub_6e04a0(this->ptr5c, &r14);
    Rect r34;
    void** vtbl58 = *(void***)this->ptr58;
    ((void(__thiscall*)(void*, Rect*))vtbl58[4])(this->ptr58, &r34);
    Rect r5c;
    void** vtbl5c = *(void***)this->ptr5c;
    ((void(__thiscall*)(void*, Rect*))vtbl5c[4])(this->ptr5c, &r5c);
    Rect* argRect = (Rect*)((char*)&a + 0);
    Rect* esi = (Rect*)((char*)&b + 0);
    UnionRect(&r14, &r24, esi);
    int* outRect = (int*)((char*)&a + 4);
    outRect[0] = esi->left;
    outRect[1] = esi->top;
    outRect[2] = esi->right;
    outRect[3] = esi->bottom;
    int ecxB0 = ((ObjB0*)edi)->fieldb0;
    if (ebx != 0) {
        int edx = r14.left + ebp;
        if (edx <= ecxB0) edx = ecxB0;
        int edi2 = r14.right;
        if (edi2 > ecxB0) ecxB0 = edi2;
        esi->left += ecxB0;
        esi->right -= edx;
        int ecx2 = outRect[0];
        int ebp2 = outRect[2];
        int edi3 = r14.top;
        int ebx2 = esi->left;
        int edx2 = esi->right;
        ebp2 -= ecx2;
        if (ebp2 > edi3) {
            ecx2 += edi3;
            if (edx2 < ecx2) ecx2 = edx2;
            esi->right = ecx2;
        }
        int ecx3 = outRect[2];
        int edx3 = ecx3 - outRect[0];
        int eax2 = r14.bottom;
        if (edx3 > eax2) {
            ecx3 -= eax2;
            ecx3 -= savedEbp;
            if (ebx2 > ecx3) ecx3 = ebx2;
            esi->left = ecx3;
        }
        if (esi->left < esi->right) {
            return 1;
        }
        return 0;
    } else {
        int edx = r14.left + ebp;
        if (edx <= ecxB0) edx = ecxB0;
        int edi2 = r14.right;
        if (edi2 > ecxB0) ecxB0 = edi2;
        esi->top += ecxB0;
        esi->bottom -= edx;
        int ecx2 = outRect[1];
        int ebp2 = outRect[3];
        int edi3 = r14.top;
        int ebx2 = esi->top;
        int edx2 = esi->bottom;
        ebp2 -= ecx2;
        if (ebp2 > edi3) {
            ecx2 += edi3;
            if (edx2 < ecx2) ecx2 = edx2;
            esi->bottom = ecx2;
        }
        int ecx3 = outRect[3];
        int edx3 = ecx3 - outRect[1];
        int eax2 = r14.bottom;
        if (edx3 > eax2) {
            ecx3 -= eax2;
            ecx3 -= savedEbp;
            if (ebx2 > ecx3) ecx3 = ebx2;
            esi->top = ecx3;
        }
        if (esi->top < esi->bottom) {
            return 1;
        }
        return 0;
    }
}
