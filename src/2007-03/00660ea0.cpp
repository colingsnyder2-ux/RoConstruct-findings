// roc 2007-03 00660ea0  unit: seg_00660000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00660ea0
//
// 00660ea0  53                   push ebx
// 00660ea1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00660ea5  85db                 test ebx, ebx
// 00660ea7  56                   push esi
// 00660ea8  8bf1                 mov esi, ecx
// 00660eaa  7521                 jne 0x660ecd
// 00660eac  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00660eb2  85c0                 test eax, eax
// 00660eb4  7417                 je 0x660ecd
// 00660eb6  57                   push edi
// 00660eb7  8b7820               mov edi, dword ptr [eax + 0x20]
// 00660eba  ff154cee7700         call dword ptr [0x77ee4c]
// 00660ec0  3bc7                 cmp eax, edi
// 00660ec2  5f                   pop edi
// 00660ec3  7508                 jne 0x660ecd
// 00660ec5  53                   push ebx
// 00660ec6  8bce                 mov ecx, esi
// 00660ec8  e813edffff           call 0x65fbe0
// 00660ecd  53                   push ebx
// 00660ece  8bce                 mov ecx, esi
// 00660ed0  e89b140500           call 0x6b2370
// 00660ed5  5e                   pop esi
// 00660ed6  5b                   pop ebx
// 00660ed7  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000005@@QAEXPAX@Z)

namespace ns_ROCX000005 {
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
}
