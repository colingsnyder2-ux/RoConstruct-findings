// from server: 79% by colin
// roc 2007-08 0044baf0  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044baf0
//
// 0044baf0  53                   push ebx
// 0044baf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0044baf5  56                   push esi
// 0044baf6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044bafa  3bde                 cmp ebx, esi
// 0044bafc  742d                 je 0x44bb2b
// 0044bafe  57                   push edi
// 0044baff  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0044bb03  8b46f4               mov eax, dword ptr [esi - 0xc]
// 0044bb06  83ee0c               sub esi, 0xc
// 0044bb09  83ef0c               sub edi, 0xc
// 0044bb0c  8907                 mov dword ptr [edi], eax
// 0044bb0e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044bb11  8d5608               lea edx, [esi + 8]
// 0044bb14  894f04               mov dword ptr [edi + 4], ecx
// 0044bb17  52                   push edx
// 0044bb18  8d4f08               lea ecx, [edi + 8]
// 0044bb1b  ff1534d47700         call dword ptr [0x77d434]
// 0044bb21  3bf3                 cmp esi, ebx
// 0044bb23  75de                 jne 0x44bb03
// 0044bb25  8bc7                 mov eax, edi
// 0044bb27  5f                   pop edi
// 0044bb28  5e                   pop esi
// 0044bb29  5b                   pop ebx
// 0044bb2a  c3                   ret 
// 0044bb2b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044bb2f  5e                   pop esi
// 0044bb30  5b                   pop ebx
// 0044bb31  c3                   ret 

struct CRobloxControlColorSelector {
    void* field0;
    void* field4;
    void* field8;
    void assign(CRobloxControlColorSelector* first, CRobloxControlColorSelector* last, CRobloxControlColorSelector* dest);
};

extern "C" void __stdcall sub_77D434(void*);

void CRobloxControlColorSelector::assign(CRobloxControlColorSelector* first, CRobloxControlColorSelector* last, CRobloxControlColorSelector* dest)
{
    if (first != last) {
        do {
            last = (CRobloxControlColorSelector*)((char*)last - 12);
            dest = (CRobloxControlColorSelector*)((char*)dest - 12);
            *(void**)dest = *(void**)last;
            *(void**)((char*)dest + 4) = *(void**)((char*)last + 4);
            sub_77D434((char*)dest + 8);
        } while (last != first);
    }
}
