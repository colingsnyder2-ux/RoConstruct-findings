// from server: 91% by atomic.potato
// roc 2007-08 004968c0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004968c0
//
// 004968c0  53                   push ebx
// 004968c1  56                   push esi
// 004968c2  8bf1                 mov esi, ecx
// 004968c4  33db                 xor ebx, ebx
// 004968c6  395e10               cmp dword ptr [esi + 0x10], ebx
// 004968c9  57                   push edi
// 004968ca  7433                 je 0x4968ff
// 004968cc  83cfff               or edi, 0xffffffff
// 004968cf  90                   nop 
// 004968d0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004968d3  3bc3                 cmp eax, ebx
// 004968d5  7423                 je 0x4968fa
// 004968d7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004968da  8d4408ff             lea eax, [eax + ecx - 1]
// 004968de  8b4e08               mov ecx, dword ptr [esi + 8]
// 004968e1  3bc8                 cmp ecx, eax
// 004968e3  7702                 ja 0x4968e7
// 004968e5  2bc1                 sub eax, ecx
// 004968e7  8b5604               mov edx, dword ptr [esi + 4]
// 004968ea  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004968ed  e8aed0ffff           call 0x4939a0
// 004968f2  017e10               add dword ptr [esi + 0x10], edi
// 004968f5  7503                 jne 0x4968fa
// 004968f7  895e0c               mov dword ptr [esi + 0xc], ebx
// 004968fa  395e10               cmp dword ptr [esi + 0x10], ebx
// 004968fd  75d1                 jne 0x4968d0
// 004968ff  8b7e08               mov edi, dword ptr [esi + 8]
// 00496902  3bfb                 cmp edi, ebx
// 00496904  761d                 jbe 0x496923
// 00496906  8b4604               mov eax, dword ptr [esi + 4]
// 00496909  83ef01               sub edi, 1
// 0049690c  391cb8               cmp dword ptr [eax + edi*4], ebx
// 0049690f  8d04b8               lea eax, [eax + edi*4]
// 00496912  740b                 je 0x49691f
// 00496914  8b08                 mov ecx, dword ptr [eax]
// 00496916  51                   push ecx
// 00496917  e846931900           call 0x62fc62
// 0049691c  83c404               add esp, 4
// 0049691f  3bfb                 cmp edi, ebx
// 00496921  77e3                 ja 0x496906
// 00496923  8b4604               mov eax, dword ptr [esi + 4]
// 00496926  3bc3                 cmp eax, ebx
// 00496928  7409                 je 0x496933
// 0049692a  50                   push eax
// 0049692b  e832931900           call 0x62fc62
// 00496930  83c404               add esp, 4
// 00496933  5f                   pop edi
// 00496934  895e04               mov dword ptr [esi + 4], ebx
// 00496937  895e08               mov dword ptr [esi + 8], ebx
// 0049693a  5e                   pop esi
// 0049693b  5b                   pop ebx
// 0049693c  c3                   ret 

struct BoundFuncDesc {
    int field0;
    void* field4;
    unsigned int field8;
    int fieldC;
    int field10;
    void clear();
};

extern "C" void __fastcall sub_4939A0(void*);
extern "C" void __cdecl sub_62FC62(void*);

void BoundFuncDesc::clear()
{
    while (field10 != 0) {
        if (field10 != 0) {
            int idx = fieldC + field10 - 1;
            if (field8 <= (unsigned int)idx)
                idx -= field8;
            void* p = ((void**)field4)[idx];
            sub_4939A0(p);
            field10 -= 1;
            if (field10 == 0)
                fieldC = 0;
        }
    }
    unsigned int n = field8;
    while (n > 0) {
        n -= 1;
        void** slot = (void**)((char*)field4 + n * 4);
        if (*slot != 0) {
            sub_62FC62(*slot);
        }
    }
    if (field4 != 0) {
        sub_62FC62(field4);
    }
    field8 = 0;
    field4 = 0;
}
