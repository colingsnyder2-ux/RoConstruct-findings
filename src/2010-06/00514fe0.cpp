// from server: 73% by atomic.potato
// roc 2010-06 00514fe0  unit: RakPeer  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514fe0
//
// 00514fe0  83ec08               sub esp, 8
// 00514fe3  53                   push ebx
// 00514fe4  55                   push ebp
// 00514fe5  56                   push esi
// 00514fe6  57                   push edi
// 00514fe7  8bf1                 mov esi, ecx
// 00514fe9  e8a2adffff           call 0x50fd90
// 00514fee  8986800a0000         mov dword ptr [esi + 0xa80], eax
// 00514ff4  8dbe840a0000         lea edi, [esi + 0xa84]
// 00514ffa  bd03000000           mov ebp, 3
// 00514fff  90                   nop 
// 00515000  6a01                 push 1
// 00515002  e8899e0000           call 0x51ee90
// 00515007  6a00                 push 0
// 00515009  e8829e0000           call 0x51ee90
// 0051500e  83c408               add esp, 8
// 00515011  e87aadffff           call 0x50fd90
// 00515016  8907                 mov dword ptr [edi], eax
// 00515018  33f6                 xor esi, esi
// 0051501a  8d9b00000000         lea ebx, [ebx]
// 00515020  e86badffff           call 0x50fd90
// 00515025  6a01                 push 1
// 00515027  8bd8                 mov ebx, eax
// 00515029  89542418             mov dword ptr [esp + 0x18], edx
// 0051502d  e85e9e0000           call 0x51ee90
// 00515032  6a00                 push 0
// 00515034  e8579e0000           call 0x51ee90
// 00515039  83c408               add esp, 8
// 0051503c  e84fadffff           call 0x50fd90
// 00515041  2bc3                 sub eax, ebx
// 00515043  c1e01c               shl eax, 0x1c
// 00515046  25000000f0           and eax, 0xf0000000
// 0051504b  8bce                 mov ecx, esi
// 0051504d  d3e8                 shr eax, cl
// 0051504f  83c604               add esi, 4
// 00515052  3107                 xor dword ptr [edi], eax
// 00515054  83fe1c               cmp esi, 0x1c
// 00515057  72c7                 jb 0x515020
// 00515059  83c704               add edi, 4
// 0051505c  83ed01               sub ebp, 1
// 0051505f  759f                 jne 0x515000
// 00515061  5f                   pop edi
// 00515062  5e                   pop esi
// 00515063  5d                   pop ebp
// 00515064  5b                   pop ebx
// 00515065  83c408               add esp, 8
// 00515068  c3                   ret 

extern "C" unsigned int __stdcall get_file_attributes(const char* path);

struct RakPeer {
    char pad0[0xa80];
    unsigned int m_field_a80;
    unsigned int m_field_a84;
    unsigned int m_field_a88;
    unsigned int m_field_a8c;
    unsigned int m_field_a90;
    unsigned int m_field_a94;
    unsigned int m_field_a98;
    unsigned int m_field_a9c;
    unsigned int m_field_aa0;
    unsigned int m_field_aa4;
    unsigned int m_field_aa8;
    unsigned int m_field_aac;
    unsigned int m_field_ab0;
    unsigned int m_field_ab4;
    unsigned int m_field_ab8;
    unsigned int m_field_abc;
    unsigned int m_field_ac0;
    unsigned int m_field_ac4;
    unsigned int m_field_ac8;
    unsigned int m_field_acc;
    unsigned int m_field_ad0;
    unsigned int m_field_ad4;
    unsigned int m_field_ad8;
    unsigned int m_field_adc;
    unsigned int m_field_ae0;
    unsigned int m_field_ae4;
    unsigned int m_field_ae8;
    unsigned int m_field_aec;
    void init();
};

void RakPeer::init()
{
    unsigned int* p;
    int i;
    int j;
    unsigned int v;
    unsigned int t;

    m_field_a80 = get_file_attributes(0);
    p = &m_field_a84;
    j = 3;
    do {
        get_file_attributes((const char*)1);
        get_file_attributes(0);
        *p = get_file_attributes(0);
        i = 0;
        do {
            t = get_file_attributes(0);
            get_file_attributes((const char*)1);
            get_file_attributes(0);
            v = get_file_attributes(0);
            v = (v - t) << 28;
            v &= 0xf0000000u;
            v >>= i;
            *p ^= v;
            i += 4;
        } while (i < 0x1c);
        p++;
        j--;
    } while (j != 0);
}
