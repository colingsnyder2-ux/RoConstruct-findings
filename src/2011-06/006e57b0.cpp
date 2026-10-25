// from server: 60% by atomic.potato
// roc 2011-06 006e57b0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e57b0
//
// 006e57b0  51                   push ecx
// 006e57b1  8b01                 mov eax, dword ptr [ecx]
// 006e57b3  53                   push ebx
// 006e57b4  8b581c               mov ebx, dword ptr [eax + 0x1c]
// 006e57b7  56                   push esi
// 006e57b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e57bc  57                   push edi
// 006e57bd  8b7820               mov edi, dword ptr [eax + 0x20]
// 006e57c0  6a00                 push 0
// 006e57c2  6a00                 push 0
// 006e57c4  8bce                 mov ecx, esi
// 006e57c6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006e57ce  ff155005a400         call dword ptr [0xa40550]
// 006e57d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e57d8  50                   push eax
// 006e57d9  57                   push edi
// 006e57da  53                   push ebx
// 006e57db  8bce                 mov ecx, esi
// 006e57dd  e89e59f3ff           call 0x61b180
// 006e57e2  5f                   pop edi
// 006e57e3  8bc6                 mov eax, esi
// 006e57e5  5e                   pop esi
// 006e57e6  5b                   pop ebx
// 006e57e7  59                   pop ecx
// 006e57e8  c20400               ret 4

struct S {
    char* f(char* out);
};

extern "C" void __stdcall sub_a40550(char*, int);
extern "C" void __fastcall sub_61b180(char*, int, int, int);

char* S::f(char* out)
{
    int* vt = *(int**)this;
    int a = *(int*)((char*)vt + 0x1c);
    int b = *(int*)((char*)vt + 0x20);
    int tmp = 0;
    sub_a40550(out, 0);
    sub_61b180(out, a, b, tmp);
    return out;
}
