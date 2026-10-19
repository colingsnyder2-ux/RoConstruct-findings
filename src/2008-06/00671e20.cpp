// from server: 53% by colin
// from server: 45% by colin
// roc 2008-06 00671e20  unit: RBX::AdornRbxGfx  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00671e20
//
// 00671e20  83ec0c               sub esp, 0xc
// 00671e23  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00671e26  2b416c               sub eax, dword ptr [ecx + 0x6c]
// 00671e29  53                   push ebx
// 00671e2a  55                   push ebp
// 00671e2b  56                   push esi
// 00671e2c  8d7160               lea esi, [ecx + 0x60]
// 00671e2f  57                   push edi
// 00671e30  33ff                 xor edi, edi
// 00671e32  897c2410             mov dword ptr [esp + 0x10], edi
// 00671e36  a9fcffffff           test eax, 0xfffffffc
// 00671e3b  0f8e81000000         jle 0x671ec2
// 00671e41  8d5948               lea ebx, [ecx + 0x48]
// 00671e44  eb04                 jmp 0x671e4a
// 00671e46  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00671e4a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00671e4d  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00671e50  c1f902               sar ecx, 2
// 00671e53  3bf9                 cmp edi, ecx
// 00671e55  7206                 jb 0x671e5d
// 00671e57  ff1590288000         call dword ptr [0x802890]
// 00671e5d  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00671e60  8b560c               mov edx, dword ptr [esi + 0xc]
// 00671e63  8d2cba               lea ebp, [edx + edi*4]
// 00671e66  85c0                 test eax, eax
// 00671e68  7504                 jne 0x671e6e
// 00671e6a  33c9                 xor ecx, ecx
// 00671e6c  eb08                 jmp 0x671e76
// 00671e6e  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00671e71  2bc8                 sub ecx, eax
// 00671e73  c1f902               sar ecx, 2
// 00671e76  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00671e79  8bd7                 mov edx, edi
// 00671e7b  2bd0                 sub edx, eax
// 00671e7d  c1fa02               sar edx, 2
// 00671e80  3bd1                 cmp edx, ecx
// 00671e82  730d                 jae 0x671e91
// 00671e84  8b4500               mov eax, dword ptr [ebp]
// 00671e87  8907                 mov dword ptr [edi], eax
// 00671e89  83c704               add edi, 4
// 00671e8c  897b10               mov dword ptr [ebx + 0x10], edi
// 00671e8f  eb1b                 jmp 0x671eac
// 00671e91  3bc7                 cmp eax, edi
// 00671e93  7606                 jbe 0x671e9b
// 00671e95  ff1590288000         call dword ptr [0x802890]
// 00671e9b  8b03                 mov eax, dword ptr [ebx]
// 00671e9d  55                   push ebp
// 00671e9e  57                   push edi
// 00671e9f  50                   push eax
// 00671ea0  8d4c2420             lea ecx, [esp + 0x20]
// 00671ea4  51                   push ecx
// 00671ea5  8bcb                 mov ecx, ebx
// 00671ea7  e8b45de5ff           call 0x4c7c60
// 00671eac  8b5610               mov edx, dword ptr [esi + 0x10]
// 00671eaf  2b560c               sub edx, dword ptr [esi + 0xc]
// 00671eb2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00671eb6  40                   inc eax
// 00671eb7  c1fa02               sar edx, 2
// 00671eba  3bc2                 cmp eax, edx
// 00671ebc  89442410             mov dword ptr [esp + 0x10], eax
// 00671ec0  7c84                 jl 0x671e46
// 00671ec2  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00671ec5  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00671ec8  7606                 jbe 0x671ed0
// 00671eca  ff1590288000         call dword ptr [0x802890]
// 00671ed0  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00671ed3  8b1e                 mov ebx, dword ptr [esi]
// 00671ed5  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00671ed8  7606                 jbe 0x671ee0
// 00671eda  ff1590288000         call dword ptr [0x802890]
// 00671ee0  8b06                 mov eax, dword ptr [esi]
// 00671ee2  55                   push ebp
// 00671ee3  53                   push ebx
// 00671ee4  57                   push edi
// 00671ee5  50                   push eax
// 00671ee6  8d442424             lea eax, [esp + 0x24]
// 00671eea  50                   push eax
// 00671eeb  8bce                 mov ecx, esi
// 00671eed  e8ce3eddff           call 0x445dc0
// 00671ef2  5f                   pop edi
// 00671ef3  5e                   pop esi
// 00671ef4  5d                   pop ebp
// 00671ef5  5b                   pop ebx
// 00671ef6  83c40c               add esp, 0xc
// 00671ef9  c3                   ret 
#include <intrin.h>

struct Vec {
    int* begin;
    int* end;
    int* cap;
};

struct Inner {
    char pad[0x0c];
    int* begin;
    int* end;
    int* cap;
};

struct Outer {
    char pad0[0x0c];
    int* begin;
    int* end;
    int* cap;
};

struct S {
    char pad0[0x48];
    Outer outer;
    char pad1[0x0c];
    Inner inner;
    char pad2[0x08];
    int count;

    void f();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void __stdcall helper1(void* dst, int* first, int* last, int* src);
void __stdcall helper2(void* dst, int* first, int* last, int* src);

void S::f()
{
    int n = count - *(int*)((char*)this + 0x6c);
    _ReadWriteBarrier();
    int i = 0;
    if ((n & 0xfffffffc) > 0) {
        do {
            int idx = i;
            int sz = (int)((char*)inner.end - (char*)inner.begin) >> 2;
            if ((unsigned)idx >= (unsigned)sz)
                _invalid_parameter_noinfo();

            int* src = inner.begin + idx;

            int* b = outer.begin;
            int* e = outer.end;
            int* c = outer.cap;

            int cap = (b != 0) ? 0 : (int)((char*)c - (char*)b) >> 2;
            int len = (int)((char*)e - (char*)b) >> 2;

            if ((unsigned)len < (unsigned)cap) {
                *e = *src;
                outer.end = e + 1;
            } else {
                if (b > e)
                    _invalid_parameter_noinfo();
                helper2(&outer, b, e, src);
            }

            i++;
            int sz2 = (int)((char*)inner.end - (char*)inner.begin) >> 2;
            if (i >= sz2)
                break;
        } while (1);
    }

    int* e2 = inner.end;
    if (inner.begin > e2)
        _invalid_parameter_noinfo();

    int* b2 = inner.begin;
    int* c2 = inner.cap;
    if (b2 > inner.end)
        _invalid_parameter_noinfo();

    helper1(&inner, inner.begin, e2, b2);
}
