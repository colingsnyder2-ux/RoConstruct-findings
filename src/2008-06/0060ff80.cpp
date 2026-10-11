// from server: 60% by atomic.potato
// roc 2008-06 0060ff80  unit: RBX::BlockBlockContact  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ff80
//
// 0060ff80  83ec30               sub esp, 0x30
// 0060ff83  53                   push ebx
// 0060ff84  56                   push esi
// 0060ff85  57                   push edi
// 0060ff86  e89539f7ff           call 0x583920
// 0060ff8b  d900                 fld dword ptr [eax]
// 0060ff8d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0060ff91  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0060ff95  d91b                 fstp dword ptr [ebx]
// 0060ff97  d94004               fld dword ptr [eax + 4]
// 0060ff9a  33f6                 xor esi, esi
// 0060ff9c  d95b04               fstp dword ptr [ebx + 4]
// 0060ff9f  d94008               fld dword ptr [eax + 8]
// 0060ffa2  d95b08               fstp dword ptr [ebx + 8]
// 0060ffa5  d9400c               fld dword ptr [eax + 0xc]
// 0060ffa8  d95b0c               fstp dword ptr [ebx + 0xc]
// 0060ffab  d94010               fld dword ptr [eax + 0x10]
// 0060ffae  d95b10               fstp dword ptr [ebx + 0x10]
// 0060ffb1  d94014               fld dword ptr [eax + 0x14]
// 0060ffb4  d95b14               fstp dword ptr [ebx + 0x14]
// 0060ffb7  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060ffba  2b470c               sub eax, dword ptr [edi + 0xc]
// 0060ffbd  c1f802               sar eax, 2
// 0060ffc0  85c0                 test eax, eax
// 0060ffc2  0f8695000000         jbe 0x61005d
// 0060ffc8  55                   push ebp
// 0060ffc9  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0060ffcf  90                   nop 
// 0060ffd0  d905ac9b8100         fld dword ptr [0x819bac]
// 0060ffd6  3bf0                 cmp esi, eax
// 0060ffd8  720a                 jb 0x60ffe4
// 0060ffda  ddd8                 fstp st(0)
// 0060ffdc  ffd5                 call ebp
// 0060ffde  d905ac9b8100         fld dword ptr [0x819bac]
// 0060ffe4  8b470c               mov eax, dword ptr [edi + 0xc]
// 0060ffe7  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0060ffea  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0060fff0  d94004               fld dword ptr [eax + 4]
// 0060fff3  83c004               add eax, 4
// 0060fff6  d8c9                 fmul st(1)
// 0060fff8  d94004               fld dword ptr [eax + 4]
// 0060fffb  d8ca                 fmul st(2)
// 0060fffd  d94008               fld dword ptr [eax + 8]
// 00610000  decb                 fmulp st(3)
// 00610002  d9c1                 fld st(1)
// 00610004  d9e0                 fchs 
// 00610006  d9c1                 fld st(1)
// 00610008  d9e0                 fchs 
// 0061000a  d9c4                 fld st(4)
// 0061000c  d9e0                 fchs 
// 0061000e  d9ca                 fxch st(2)
// 00610010  d95c2410             fstp dword ptr [esp + 0x10]
// 00610014  d95c2414             fstp dword ptr [esp + 0x14]
// 00610018  d95c2418             fstp dword ptr [esp + 0x18]
// 0061001c  d9c9                 fxch st(1)
// 0061001e  d95c241c             fstp dword ptr [esp + 0x1c]
// 00610022  d95c2420             fstp dword ptr [esp + 0x20]
// 00610026  d95c2424             fstp dword ptr [esp + 0x24]
// 0061002a  e89182fdff           call 0x5e82c0
// 0061002f  50                   push eax
// 00610030  8d4c242c             lea ecx, [esp + 0x2c]
// 00610034  51                   push ecx
// 00610035  8d4c2418             lea ecx, [esp + 0x18]
// 00610039  e8e2fbffff           call 0x60fc20
// 0061003e  8d542428             lea edx, [esp + 0x28]
// 00610042  52                   push edx
// 00610043  8bcb                 mov ecx, ebx
// 00610045  e896def6ff           call 0x57dee0
// 0061004a  8b4710               mov eax, dword ptr [edi + 0x10]
// 0061004d  2b470c               sub eax, dword ptr [edi + 0xc]
// 00610050  46                   inc esi
// 00610051  c1f802               sar eax, 2
// 00610054  3bf0                 cmp esi, eax
// 00610056  0f8274ffffff         jb 0x60ffd0
// 0061005c  5d                   pop ebp
// 0061005d  5f                   pop edi
// 0061005e  5e                   pop esi
// 0061005f  8bc3                 mov eax, ebx
// 00610061  5b                   pop ebx
// 00610062  83c430               add esp, 0x30
// 00610065  c3                   ret 

struct Mat34 {
    float m[12];
};

struct Contact {
    char pad0[0x9c];
    Mat34* m_mat;
};

struct ContactList {
    char pad0[0xc];
    Contact** m_begin;
    Contact** m_end;
};

extern "C" float* __stdcall sub_00583920();
extern "C" void __stdcall sub_0057dee0(void*, void*);
extern "C" void* __stdcall sub_005e82c0();
extern "C" void __stdcall sub_0060fc20(void*, void*);

extern float g_819bac;
extern void (__stdcall *g_802890)();

struct BlockBlockContact {
    void* f(void* out, ContactList* list);
};

void* BlockBlockContact::f(void* out, ContactList* list)
{
    float* src = sub_00583920();
    float* dst = (float*)out;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];

    unsigned int count = (unsigned int)((char*)list->m_end - (char*)list->m_begin) >> 2;
    unsigned int i = 0;
    if (count > 0) {
        do {
            float scale = g_819bac;
            if (i >= count) {
                g_802890();
                scale = g_819bac;
            }
            Contact* c = list->m_begin[i];
            Mat34* m = c->m_mat;
            float a = m->m[0] * scale;
            float b = m->m[1] * scale;
            float cc = m->m[2] * scale;
            float d = -a;
            float e = -b;
            float f2 = -cc;
            float tmp[6];
            tmp[0] = d;
            tmp[1] = e;
            tmp[2] = f2;
            tmp[3] = a;
            tmp[4] = b;
            tmp[5] = cc;
            void* p = sub_005e82c0();
            sub_0060fc20(tmp, p);
            sub_0057dee0(out, tmp);
            count = (unsigned int)((char*)list->m_end - (char*)list->m_begin) >> 2;
            i++;
        } while (i < count);
    }
    return out;
}
