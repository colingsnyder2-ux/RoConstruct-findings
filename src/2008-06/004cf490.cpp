// from server: 100% by colin
// roc 2008-06 004cf490  unit: RBX::Network::PhysicsSender  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf490
//
// 004cf490  56                   push esi
// 004cf491  8bf1                 mov esi, ecx
// 004cf493  8b06                 mov eax, dword ptr [esi]
// 004cf495  57                   push edi
// 004cf496  33ff                 xor edi, edi
// 004cf498  3bc7                 cmp eax, edi
// 004cf49a  7450                 je 0x4cf4ec
// 004cf49c  83f801               cmp eax, 1
// 004cf49f  7517                 jne 0x4cf4b8
// 004cf4a1  8b4604               mov eax, dword ptr [esi + 4]
// 004cf4a4  50                   push eax
// 004cf4a5  e8d0111d00           call 0x6a067a
// 004cf4aa  83c404               add esp, 4
// 004cf4ad  897e04               mov dword ptr [esi + 4], edi
// 004cf4b0  893e                 mov dword ptr [esi], edi
// 004cf4b2  897e08               mov dword ptr [esi + 8], edi
// 004cf4b5  5f                   pop edi
// 004cf4b6  5e                   pop esi
// 004cf4b7  c3                   ret 
// 004cf4b8  8b4608               mov eax, dword ptr [esi + 8]
// 004cf4bb  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf4be  8b5008               mov edx, dword ptr [eax + 8]
// 004cf4c1  895108               mov dword ptr [ecx + 8], edx
// 004cf4c4  8b4608               mov eax, dword ptr [esi + 8]
// 004cf4c7  8b4808               mov ecx, dword ptr [eax + 8]
// 004cf4ca  8b5004               mov edx, dword ptr [eax + 4]
// 004cf4cd  895104               mov dword ptr [ecx + 4], edx
// 004cf4d0  8b4608               mov eax, dword ptr [esi + 8]
// 004cf4d3  8b7808               mov edi, dword ptr [eax + 8]
// 004cf4d6  3b4604               cmp eax, dword ptr [esi + 4]
// 004cf4d9  7503                 jne 0x4cf4de
// 004cf4db  897e04               mov dword ptr [esi + 4], edi
// 004cf4de  50                   push eax
// 004cf4df  e896111d00           call 0x6a067a
// 004cf4e4  83c404               add esp, 4
// 004cf4e7  ff0e                 dec dword ptr [esi]
// 004cf4e9  897e08               mov dword ptr [esi + 8], edi
// 004cf4ec  5f                   pop edi
// 004cf4ed  5e                   pop esi
// 004cf4ee  c3                   ret 

struct S_func_004cf490 {
    int m_count;
    void* m_head;
    void* m_tail;
    void f();
};

extern "C" void __cdecl sub_006a067a(void*);

void S_func_004cf490::f()
{
    if (m_count == 0)
        return;

    if (m_count == 1) {
        sub_006a067a(m_head);
        m_head = 0;
        m_count = 0;
        m_tail = 0;
        return;
    }

    void* node = m_tail;
    void* prev = *(void**)((char*)node + 4);
    void* next = *(void**)((char*)node + 8);
    *(void**)((char*)prev + 8) = next;

    node = m_tail;
    prev = *(void**)((char*)node + 4);
    next = *(void**)((char*)node + 8);
    *(void**)((char*)next + 4) = prev;

    node = m_tail;
    void* newTail = *(void**)((char*)node + 8);
    if (node == m_head)
        m_head = newTail;

    sub_006a067a(node);
    m_count--;
    m_tail = newTail;
}
