// from server: 64% by colin
// from server: 56% by colin
// roc 2008-06 004d8320  unit: RBX::RenderBase::SimpleSceneManager  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8320
//
// 004d8320  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d8323  56                   push esi
// 004d8324  8d7108               lea esi, [ecx + 8]
// 004d8327  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d832a  33c0                 xor eax, eax
// 004d832c  57                   push edi
// 004d832d  85c9                 test ecx, ecx
// 004d832f  7e1b                 jle 0x4d834c
// 004d8331  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d8335  8b3a                 mov edi, dword ptr [edx]
// 004d8337  8b16                 mov edx, dword ptr [esi]
// 004d8339  8da42400000000       lea esp, [esp]
// 004d8340  393a                 cmp dword ptr [edx], edi
// 004d8342  740b                 je 0x4d834f
// 004d8344  40                   inc eax
// 004d8345  83c204               add edx, 4
// 004d8348  3bc1                 cmp eax, ecx
// 004d834a  7cf4                 jl 0x4d8340
// 004d834c  83c8ff               or eax, 0xffffffff
// 004d834f  8b0e                 mov ecx, dword ptr [esi]
// 004d8351  8b5604               mov edx, dword ptr [esi + 4]
// 004d8354  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 004d8358  52                   push edx
// 004d8359  8d0c81               lea ecx, [ecx + eax*4]
// 004d835c  e83f0c0c00           call 0x598fa0
// 004d8361  8b4604               mov eax, dword ptr [esi + 4]
// 004d8364  6a01                 push 1
// 004d8366  48                   dec eax
// 004d8367  50                   push eax
// 004d8368  8bce                 mov ecx, esi
// 004d836a  e821f5ffff           call 0x4d7890
// 004d836f  5f                   pop edi
// 004d8370  5e                   pop esi
// 004d8371  c20400               ret 4
#include <intrin.h>

struct Inner {
    int* begin;
    int count;
};

struct Outer {
    char pad[8];
    Inner inner;
};

struct S {
    char pad[4];
    Outer* outer;
    void f(int* value);
};

void __stdcall erase_helper(int* pos, int* last);

void __stdcall remove_at(Inner* self, int index);

void S::f(int* value)
{
    Outer* o = outer;
    _ReadWriteBarrier();
    Inner* in = &o->inner;
    int count = in->count;
    int idx = -1;
    if (count > 0) {
        int target = *value;
        int* p = in->begin;
        int i = 0;
        do {
            if (*p == target) {
                idx = i;
                break;
            }
            ++i;
            ++p;
        } while (i < count);
    }
    int* begin = in->begin;
    int n = in->count;
    int* last = begin + n - 1;
    erase_helper(begin + idx, last);
    remove_at(in, in->count - 1);
}
