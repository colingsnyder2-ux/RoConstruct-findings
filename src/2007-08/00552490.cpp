// from server: 47% by colin
// roc 2007-08 00552490  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552490
//
// 00552490  55                   push ebp
// 00552491  8bec                 mov ebp, esp
// 00552493  6aff                 push -1
// 00552495  68102c7500           push 0x752c10
// 0055249a  64a100000000         mov eax, dword ptr fs:[0]
// 005524a0  50                   push eax
// 005524a1  64892500000000       mov dword ptr fs:[0], esp
// 005524a8  51                   push ecx
// 005524a9  53                   push ebx
// 005524aa  56                   push esi
// 005524ab  57                   push edi
// 005524ac  8b7d08               mov edi, dword ptr [ebp + 8]
// 005524af  8965f0               mov dword ptr [ebp - 0x10], esp
// 005524b2  57                   push edi
// 005524b3  8bf1                 mov esi, ecx
// 005524b5  e856cfffff           call 0x54f410
// 005524ba  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005524c0  57                   push edi
// 005524c1  50                   push eax
// 005524c2  83c640               add esi, 0x40
// 005524c5  56                   push esi
// 005524c6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005524cd  e8cee2ffff           call 0x5507a0
// 005524d2  83c40c               add esp, 0xc

struct S {
    char pad[0x8c];
    int field_8c;
    void f(int);
};

extern "C" void __stdcall sub_54f410(int);
extern "C" void __stdcall sub_5507a0(void*, int, int);

void S::f(int a1)
{
    sub_54f410(a1);
    sub_5507a0((char*)this + 0x40, field_8c, a1);
}
