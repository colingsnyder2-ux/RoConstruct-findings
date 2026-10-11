// from server: 100% by colin
// roc 2007-08 0061bc40  unit: RBX::KeyButton  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bc40
//
// 0061bc40  8b442408             mov eax, dword ptr [esp + 8]
// 0061bc44  833809               cmp dword ptr [eax], 9
// 0061bc47  750c                 jne 0x61bc55
// 0061bc49  8b5008               mov edx, dword ptr [eax + 8]
// 0061bc4c  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0061bc4f  7504                 jne 0x61bc55
// 0061bc51  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 0061bc55  83380a               cmp dword ptr [eax], 0xa
// 0061bc58  750c                 jne 0x61bc66
// 0061bc5a  8b5008               mov edx, dword ptr [eax + 8]
// 0061bc5d  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0061bc60  7504                 jne 0x61bc66
// 0061bc62  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 0061bc66  56                   push esi
// 0061bc67  8b742408             mov esi, dword ptr [esp + 8]
// 0061bc6b  50                   push eax
// 0061bc6c  56                   push esi
// 0061bc6d  e82e4afeff           call 0x6006a0
// 0061bc72  8bc6                 mov eax, esi
// 0061bc74  5e                   pop esi
// 0061bc75  c20800               ret 8

struct RBX_KeyButton {
    char pad0[0x18];
    int m_id;
    bool m_active;
    void* processEvent(int, int);
};

void* __stdcall sub_006006A0(void*, int);

void* RBX_KeyButton::processEvent(int a, int b)
{
    int* ev = (int*)b;
    if (ev[0] == 9 && ev[2] == m_id)
        m_active = true;
    if (ev[0] == 10 && ev[2] == m_id)
        m_active = false;
    sub_006006A0((void*)a, b);
    return (void*)a;
}
