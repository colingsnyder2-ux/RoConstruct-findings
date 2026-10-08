// from server: 83% by colin
// roc 2007-08 0069e200  unit: CXTPPropertyGridItemEnum  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e200
//
// 0069e200  8b542404             mov edx, dword ptr [esp + 4]
// 0069e204  8b4224               mov eax, dword ptr [edx + 0x24]
// 0069e207  56                   push esi
// 0069e208  8bf1                 mov esi, ecx
// 0069e20a  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0069e210  85c9                 test ecx, ecx
// 0069e212  898600010000         mov dword ptr [esi + 0x100], eax
// 0069e218  7402                 je 0x69e21c
// 0069e21a  8901                 mov dword ptr [ecx], eax
// 0069e21c  51                   push ecx
// 0069e21d  83c220               add edx, 0x20
// 0069e220  8bcc                 mov ecx, esp
// 0069e222  8964240c             mov dword ptr [esp + 0xc], esp
// 0069e226  52                   push edx
// 0069e227  ff1574dd7700         call dword ptr [0x77dd74]
// 0069e22d  8bce                 mov ecx, esi
// 0069e22f  e8fca3ffff           call 0x698630
// 0069e234  5e                   pop esi
// 0069e235  c20400               ret 4

struct CXTPPropertyGridItemEnum {
    char pad[0x100];
    int field100;
    int* field104;
    void SetValue(int* value);
};

extern "C" void* __stdcall sub_77DD74(void*, const void*);
extern "C" void __fastcall sub_698630(CXTPPropertyGridItemEnum*);

void CXTPPropertyGridItemEnum::SetValue(int* value) {
    int v = *(int*)((char*)value + 0x24);
    int* p = field104;
    field100 = v;
    if (p != 0) {
        *p = v;
    }
    sub_77DD74(&p, (char*)value + 0x20);
    sub_698630(this);
}
