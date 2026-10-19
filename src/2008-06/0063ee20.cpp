// from server: 47% by colin
// from server: 46% by colin
// roc 2008-06 0063ee20  unit: RBX::ResizeTool  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ee20
//
// 0063ee20  64a100000000         mov eax, dword ptr fs:[0]
// 0063ee26  6aff                 push -1
// 0063ee28  682ba97d00           push 0x7da92b
// 0063ee2d  50                   push eax
// 0063ee2e  64892500000000       mov dword ptr fs:[0], esp
// 0063ee35  81ec94000000         sub esp, 0x94
// 0063ee3b  57                   push edi
// 0063ee3c  8bf9                 mov edi, ecx
// 0063ee3e  8b4724               mov eax, dword ptr [edi + 0x24]
// 0063ee41  85c0                 test eax, eax
// 0063ee43  0f84dd010000         je 0x63f026
// 0063ee49  83780400             cmp dword ptr [eax + 4], 0
// 0063ee4d  0f84d3010000         je 0x63f026
// 0063ee53  56                   push esi
// 0063ee54  8d442414             lea eax, [esp + 0x14]
// 0063ee58  50                   push eax
// 0063ee59  8d4f20               lea ecx, [edi + 0x20]
// 0063ee5c  e89fbcf8ff           call 0x5cab00
// 0063ee61  8b00                 mov eax, dword ptr [eax]
// 0063ee63  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 0063ee69  8b5108               mov edx, dword ptr [ecx + 8]
// 0063ee6c  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 0063ee73  8b01                 mov eax, dword ptr [ecx]
// 0063ee75  8b00                 mov eax, dword ptr [eax]
// 0063ee77  8d54246c             lea edx, [esp + 0x6c]
// 0063ee7b  52                   push edx
// 0063ee7c  c78424a800000000000000 mov dword ptr [esp + 0xa8], 0
// 0063ee87  ffd0                 call eax
// 0063ee89  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0063ee8c  8bf0                 mov esi, eax
// 0063ee8e  b856555555           mov eax, 0x55555556
// 0063ee93  f7e9                 imul ecx
// 0063ee95  8bc2                 mov eax, edx
// 0063ee97  c1e81f               shr eax, 0x1f
// 0063ee9a  03c2                 add eax, edx
// 0063ee9c  8d1440               lea edx, [eax + eax*2]
// 0063ee9f  2bca                 sub ecx, edx
// 0063eea1  03c0                 add eax, eax
// 0063eea3  ba01000000           mov edx, 1
// 0063eea8  d9048e               fld dword ptr [esi + ecx*4]
// 0063eeab  2bd0                 sub edx, eax
// 0063eead  d9448e0c             fld dword ptr [esi + ecx*4 + 0xc]
// 0063eeb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063eeb5  d9448e18             fld dword ptr [esi + ecx*4 + 0x18]
// 0063eeb9  89542408             mov dword ptr [esp + 8], edx
// 0063eebd  c78424a4000000ffffffff mov dword ptr [esp + 0xa4], 0xffffffff
// 0063eec8  db442408             fild dword ptr [esp + 8]
// 0063eecc  d9c0                 fld st(0)
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" double __cdecl floor(double);

struct Vec3 { float x, y, z; };

struct RefCounted {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    volatile long refCount;
    volatile long refCount2;
};

struct Obj24 {
    char pad[4];
    void* ptr;
};

struct Helper20 {
    void* get();
};

struct ResizeTool {
    char pad0[0x20];
    Helper20 helper20;
    Obj24* obj24;
    int field2c;
    Vec3 vec30;
    int field40;
    void capturedDrag(int axisDelta);
    void doResize(int arg);
};

extern "C" void* __cdecl sub_5cab00(void* result, Helper20* self);
extern "C" void __cdecl sub_518830(void* result, void* a, void* b);
extern "C" void* __cdecl sub_615d00(void* self, void* result, void* input);
extern "C" void __cdecl sub_5df270(void* result, void* a, void* b);

void ResizeTool::doResize(int arg)
{
    if (!obj24) return;
    _ReadWriteBarrier();
    if (!obj24->ptr) return;

    void* tmp;
    sub_5cab00(&tmp, &helper20);
    void* p = *(void**)tmp;
    int off = *(int*)((char*)p + 0x134);
    char* base = (char*)p + 0x134 + off;
    void** vt = *(void***)base;
    void* vres;
    ((void (__thiscall*)(void*, void*))vt[0])(base, &vres);

    float* farr = (float*)vres;

    int ecx = field2c;
    int q = ecx / 3;
    int rem = ecx - q * 3;
    int idx = rem;

    float a = farr[idx];
    float b = farr[idx + 3];
    float c = farr[idx + 6];

    int m = 1 - 2 * q;
    float fm = (float)m;

    Vec3 scaled;
    scaled.x = a * fm;
    scaled.y = b * fm;
    scaled.z = c * fm;

    RefCounted* rc = (RefCounted*)tmp;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->vf1();
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1) {
                rc->vf2();
            }
        }
    }

    Vec3 zero;
    sub_518830(&zero, &vec30, &scaled);

    void* r2;
    sub_615d00(this, &r2, &zero);

    Vec3 r3;
    sub_5df270(&r3, &r2, &zero);

    float dx = r3.x - vec30.x;
    float dy = r3.y - vec30.y;
    float dz = r3.z - vec30.z;

    float dot = dx * scaled.x + dy * scaled.y + dz * scaled.z;
    float val = dot - (float)field40;

    if (val >= 1.0f) {
        int delta = (int)floor((double)val);
        field40 += delta;
        capturedDrag(delta);
    } else if (val <= -1.0f) {
        int delta = -(int)floor((double)(-val));
        field40 += delta;
        capturedDrag(delta);
    }
}
