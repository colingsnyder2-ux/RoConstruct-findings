// from server: 100% by tester
// roc 2008-06 004bca60  unit: ProfiledRakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bca60
//
// 004bca60  8b442404             mov eax, dword ptr [esp + 4]
// 004bca64  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 004bca67  56                   push esi
// 004bca68  8bd1                 mov edx, ecx
// 004bca6a  d1ea                 shr edx, 1
// 004bca6c  89501c               mov dword ptr [eax + 0x1c], edx
// 004bca6f  8b5018               mov edx, dword ptr [eax + 0x18]
// 004bca72  8bf2                 mov esi, edx
// 004bca74  d1ee                 shr esi, 1
// 004bca76  c1e11f               shl ecx, 0x1f
// 004bca79  0bf1                 or esi, ecx
// 004bca7b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004bca7e  897018               mov dword ptr [eax + 0x18], esi
// 004bca81  c1e21f               shl edx, 0x1f
// 004bca84  8bf1                 mov esi, ecx
// 004bca86  d1ee                 shr esi, 1
// 004bca88  0bf2                 or esi, edx
// 004bca8a  8b5010               mov edx, dword ptr [eax + 0x10]
// 004bca8d  897014               mov dword ptr [eax + 0x14], esi
// 004bca90  8bf2                 mov esi, edx
// 004bca92  d1ee                 shr esi, 1
// 004bca94  c1e11f               shl ecx, 0x1f
// 004bca97  0bf1                 or esi, ecx
// 004bca99  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004bca9c  897010               mov dword ptr [eax + 0x10], esi
// 004bca9f  c1e21f               shl edx, 0x1f
// 004bcaa2  8bf1                 mov esi, ecx
// 004bcaa4  d1ee                 shr esi, 1
// 004bcaa6  0bf2                 or esi, edx
// 004bcaa8  8b5008               mov edx, dword ptr [eax + 8]
// 004bcaab  89700c               mov dword ptr [eax + 0xc], esi
// 004bcaae  8bf2                 mov esi, edx
// 004bcab0  d1ee                 shr esi, 1
// 004bcab2  c1e11f               shl ecx, 0x1f
// 004bcab5  0bf1                 or esi, ecx
// 004bcab7  8b4804               mov ecx, dword ptr [eax + 4]
// 004bcaba  897008               mov dword ptr [eax + 8], esi
// 004bcabd  c1e21f               shl edx, 0x1f
// 004bcac0  8bf1                 mov esi, ecx
// 004bcac2  d1ee                 shr esi, 1
// 004bcac4  0bf2                 or esi, edx
// 004bcac6  8b10                 mov edx, dword ptr [eax]
// 004bcac8  c1e11f               shl ecx, 0x1f
// 004bcacb  d1ea                 shr edx, 1
// 004bcacd  0bd1                 or edx, ecx
// 004bcacf  897004               mov dword ptr [eax + 4], esi
// 004bcad2  8910                 mov dword ptr [eax], edx
// 004bcad4  5e                   pop esi
// 004bcad5  c3                   ret 

struct RakPeer
{
    static void shiftRight(RakPeer* peer);
};

void RakPeer::shiftRight(RakPeer* peer)
{
    unsigned int* p = (unsigned int*)peer;
    unsigned int carry = 0;
    for (int i = 7; i >= 0; --i)
    {
        unsigned int v = p[i];
        p[i] = (v >> 1) | carry;
        carry = v << 31;
    }
}
