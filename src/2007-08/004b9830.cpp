// from server: 68% by colin
// roc 2007-08 004b9830  unit: RakPeer  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9830
//
// 004b9830  8b442404             mov eax, dword ptr [esp + 4]
// 004b9834  33d2                 xor edx, edx
// 004b9836  83c008               add eax, 8
// 004b9839  56                   push esi
// 004b983a  8d9b00000000         lea ebx, [ebx]
// 004b9840  8b48f8               mov ecx, dword ptr [eax - 8]
// 004b9843  85c9                 test ecx, ecx
// 004b9845  8d71ff               lea esi, [ecx - 1]
// 004b9848  8970f8               mov dword ptr [eax - 8], esi
// 004b984b  7530                 jne 0x4b987d
// 004b984d  8b48fc               mov ecx, dword ptr [eax - 4]
// 004b9850  85c9                 test ecx, ecx
// 004b9852  8d71ff               lea esi, [ecx - 1]
// 004b9855  8970fc               mov dword ptr [eax - 4], esi
// 004b9858  7523                 jne 0x4b987d
// 004b985a  8b08                 mov ecx, dword ptr [eax]
// 004b985c  85c9                 test ecx, ecx
// 004b985e  8d71ff               lea esi, [ecx - 1]
// 004b9861  8930                 mov dword ptr [eax], esi
// 004b9863  7518                 jne 0x4b987d
// 004b9865  8b4804               mov ecx, dword ptr [eax + 4]
// 004b9868  85c9                 test ecx, ecx
// 004b986a  8d71ff               lea esi, [ecx - 1]
// 004b986d  897004               mov dword ptr [eax + 4], esi
// 004b9870  750b                 jne 0x4b987d
// 004b9872  83c204               add edx, 4
// 004b9875  83c010               add eax, 0x10
// 004b9878  83fa10               cmp edx, 0x10
// 004b987b  72c3                 jb 0x4b9840
// 004b987d  5e                   pop esi
// 004b987e  c3                   ret 

struct RakPeer {
    int m_refs[4];
    void f(int a1);
};

void RakPeer::f(int a1)
{
    int* p = (int*)(a1 + 8);
    unsigned int i = 0;
    do {
        int c = p[-2];
        if (c != 0) {
            p[-2] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[-1];
        if (c != 0) {
            p[-1] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[0];
        if (c != 0) {
            p[0] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[1];
        if (c != 0) {
            p[1] = c - 1;
            if (c - 1 != 0)
                break;
        }
        i += 4;
        p += 4;
    } while (i < 16);
}
