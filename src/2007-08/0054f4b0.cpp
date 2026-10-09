// from server: 81% by colin
// roc 2007-08 0054f4b0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f4b0
//
// 0054f4b0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0054f4b6  c1e803               shr eax, 3
// 0054f4b9  a801                 test al, 1
// 0054f4bb  7422                 je 0x54f4df
// 0054f4bd  8b9190000000         mov edx, dword ptr [ecx + 0x90]
// 0054f4c3  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0054f4c9  56                   push esi
// 0054f4ca  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054f4cd  8916                 mov dword ptr [esi], edx
// 0054f4cf  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054f4d2  8916                 mov dword ptr [esi], edx
// 0054f4d4  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054f4d7  03c2                 add eax, edx
// 0054f4d9  2bc2                 sub eax, edx
// 0054f4db  8901                 mov dword ptr [ecx], eax
// 0054f4dd  5e                   pop esi
// 0054f4de  c3                   ret 
// 0054f4df  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054f4e2  c70200000000         mov dword ptr [edx], 0
// 0054f4e8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054f4eb  c70000000000         mov dword ptr [eax], 0
// 0054f4f1  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054f4f4  c70100000000         mov dword ptr [ecx], 0
// 0054f4fa  c3                   ret 

struct S {
    void f();
};

void S::f() {
    unsigned int v = *(unsigned int*)((char*)this + 0x9c);
    v >>= 3;
    if (v & 1) {
        unsigned int edx = *(unsigned int*)((char*)this + 0x90);
        unsigned int eax = *(unsigned int*)((char*)this + 0x94);
        *(unsigned int*)(*(unsigned int*)((char*)this + 0x14)) = edx;
        *(unsigned int*)(*(unsigned int*)((char*)this + 0x24)) = edx;
        unsigned int ecx = *(unsigned int*)((char*)this + 0x34);
        eax = eax + edx;
        eax = eax - edx;
        *(unsigned int*)ecx = eax;
    } else {
        *(unsigned int*)(*(unsigned int*)((char*)this + 0x14)) = 0;
        *(unsigned int*)(*(unsigned int*)((char*)this + 0x24)) = 0;
        *(unsigned int*)(*(unsigned int*)((char*)this + 0x34)) = 0;
    }
}
