// from server: 100% by colin
// roc 2007-08 00671070  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671070
//
// 00671070  56                   push esi
// 00671071  8bf1                 mov esi, ecx
// 00671073  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00671079  85c9                 test ecx, ecx
// 0067107b  7405                 je 0x671082
// 0067107d  e862f1fbff           call 0x6301e4
// 00671082  8b442408             mov eax, dword ptr [esp + 8]
// 00671086  85c0                 test eax, eax
// 00671088  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0067108e  5e                   pop esi
// 0067108f  740d                 je 0x67109e
// 00671091  83c004               add eax, 4
// 00671094  89442404             mov dword ptr [esp + 4], eax
// 00671098  ff25ecd27700         jmp dword ptr [0x77d2ec]
// 0067109e  c20400               ret 4

struct CXTPControlPopup {
    char pad[0x16c];
    void* field_16c;
    void SetPtr(void* p);
};

extern "C" void __fastcall sub_6301e4(void* p);
extern "C" long (__stdcall *InterlockedIncrement)(long volatile* p);

void CXTPControlPopup::SetPtr(void* p)
{
    void* old = field_16c;
    if (old != 0) {
        sub_6301e4(old);
    }
    field_16c = p;
    if (p != 0) {
        InterlockedIncrement((long*)((char*)p + 4));
    }
}
