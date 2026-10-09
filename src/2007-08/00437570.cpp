// from server: 96% by colin
// roc 2007-08 00437570  unit: COutputView  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00437570
//
// 00437570  56                   push esi
// 00437571  8bf1                 mov esi, ecx
// 00437573  837e1000             cmp dword ptr [esi + 0x10], 0
// 00437577  7448                 je 0x4375c1
// 00437579  8b460c               mov eax, dword ptr [esi + 0xc]
// 0043757c  8b5604               mov edx, dword ptr [esi + 4]
// 0043757f  8bc8                 mov ecx, eax
// 00437581  c1e902               shr ecx, 2
// 00437584  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00437587  83e003               and eax, 3
// 0043758a  8d0481               lea eax, [ecx + eax*4]
// 0043758d  8b00                 mov eax, dword ptr [eax]
// 0043758f  85c0                 test eax, eax
// 00437591  7408                 je 0x43759b
// 00437593  8b10                 mov edx, dword ptr [eax]
// 00437595  50                   push eax
// 00437596  8b4208               mov eax, dword ptr [edx + 8]
// 00437599  ffd0                 call eax
// 0043759b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043759e  83460c01             add dword ptr [esi + 0xc], 1
// 004375a2  8b460c               mov eax, dword ptr [esi + 0xc]
// 004375a5  03c9                 add ecx, ecx
// 004375a7  03c9                 add ecx, ecx
// 004375a9  3bc8                 cmp ecx, eax
// 004375ab  7707                 ja 0x4375b4
// 004375ad  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004375b4  834610ff             add dword ptr [esi + 0x10], -1
// 004375b8  7507                 jne 0x4375c1
// 004375ba  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004375c1  5e                   pop esi
// 004375c2  c3                   ret 

struct COutputView {
    char pad0[4];
    int* m_array;
    int m_capacity;
    int m_index;
    int m_count;
    void f();
};

void COutputView::f()
{
    if (m_count != 0) {
        unsigned int idx = (unsigned int)m_index;
        int* slot = m_array + (idx >> 2);
        int* elem = (int*)(*slot + (idx & 3) * 4);
        int* obj = (int*)*elem;
        if (obj != 0) {
            int* vtable = (int*)*obj;
            void (__stdcall *fn)(int*) = (void (__stdcall *)(int*))vtable[2];
            fn(obj);
        }
        m_index = m_index + 1;
        if ((unsigned int)(m_capacity * 4) <= (unsigned int)m_index) {
            m_index = 0;
        }
        m_count = m_count - 1;
        if (m_count == 0) {
            m_index = 0;
        }
    }
}
