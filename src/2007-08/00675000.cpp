// from server: 100% by colin
// roc 2007-08 00675000  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675000
//
// 00675000  53                   push ebx
// 00675001  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00675005  85db                 test ebx, ebx
// 00675007  56                   push esi
// 00675008  8bf1                 mov esi, ecx
// 0067500a  7521                 jne 0x67502d
// 0067500c  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00675012  85c0                 test eax, eax
// 00675014  7417                 je 0x67502d
// 00675016  57                   push edi
// 00675017  8b7820               mov edi, dword ptr [eax + 0x20]
// 0067501a  ff15d4ec7700         call dword ptr [0x77ecd4]
// 00675020  3bc7                 cmp eax, edi
// 00675022  5f                   pop edi
// 00675023  7508                 jne 0x67502d
// 00675025  53                   push ebx
// 00675026  8bce                 mov ecx, esi
// 00675028  e873ecffff           call 0x673ca0
// 0067502d  53                   push ebx
// 0067502e  8bce                 mov ecx, esi
// 00675030  e89b210500           call 0x6c71d0
// 00675035  5e                   pop esi
// 00675036  5b                   pop ebx
// 00675037  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall GetFocus();

struct CXTPCustomizeSheet_CCustomizeEdit {
    void sub_673CA0(void*);
    void sub_6C71D0(void*);
    void func(void*);
};

void CXTPCustomizeSheet_CCustomizeEdit::func(void* arg) {
    if (arg == 0) {
        void* p = *(void**)((char*)this + 0x168);
        if (p != 0) {
            void* focus = *(void**)((char*)p + 0x20);
            if (GetFocus() == focus) {
                sub_673CA0(arg);
            }
        }
    }
    sub_6C71D0(arg);
}
