// from server: 35% by colin
// roc 2007-08 0054e460  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e460
//
// 0054e460  55                   push ebp
// 0054e461  8bec                 mov ebp, esp
// 0054e463  6aff                 push -1
// 0054e465  6880277500           push 0x752780
// 0054e46a  64a100000000         mov eax, dword ptr fs:[0]
// 0054e470  50                   push eax
// 0054e471  64892500000000       mov dword ptr fs:[0], esp
// 0054e478  83ec08               sub esp, 8
// 0054e47b  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054e47e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054e481  8b00                 mov eax, dword ptr [eax]
// 0054e483  8b12                 mov edx, dword ptr [edx]
// 0054e485  53                   push ebx
// 0054e486  56                   push esi
// 0054e487  2bc2                 sub eax, edx
// 0054e489  85c0                 test eax, eax
// 0054e48b  57                   push edi
// 0054e48c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054e48f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054e496  7e12                 jle 0x54e4aa
// 0054e498  8bb1a0000000         mov esi, dword ptr [ecx + 0xa0]
// 0054e49e  50                   push eax
// 0054e49f  52                   push edx
// 0054e4a0  56                   push esi
// 0054e4a1  83c140               add ecx, 0x40
// 0054e4a4  51                   push ecx
// 0054e4a5  e896d2ffff           call 0x54b740
// 0054e4aa  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0054e4b0  85c9                 test ecx, ecx
// 0054e4b2  7406                 je 0x54e4ba
// 0054e4b4  ff1504e67700         call dword ptr [0x77e604]

struct S_0054e460 {
    char pad0[20];
    int* m_p14;
    char pad1[12];
    int* m_p24;
    char pad2[120];
    void* m_pa0;
    void f();
};

extern "C" int __stdcall sub_0054b740(void*, void*, int, int);
extern "C" int __stdcall sub_0077e604(void*);

void S_0054e460::f()
{
    int* p24 = m_p24;
    int* p14 = m_p14;
    int a = *p24;
    int b = *p14;
    int diff = a - b;
    if (diff > 0) {
        sub_0054b740((char*)this + 0x40, m_pa0, b, diff);
    }
    void* p = m_pa0;
    if (p != 0) {
        sub_0077e604(p);
    }
}
