// from server: 67% by colin
// roc 2007-08 004a1070  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1070
//
// 004a1070  51                   push ecx
// 004a1071  53                   push ebx
// 004a1072  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a1076  56                   push esi
// 004a1077  57                   push edi
// 004a1078  6a01                 push 1
// 004a107a  6a05                 push 5
// 004a107c  8d442414             lea eax, [esp + 0x14]
// 004a1080  50                   push eax
// 004a1081  8bcb                 mov ecx, ebx
// 004a1083  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a108b  e810e9ffff           call 0x49f9a0
// 004a1090  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a1094  e877550e00           call 0x586610
// 004a1099  8bf0                 mov esi, eax
// 004a109b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a109e  85c9                 test ecx, ecx
// 004a10a0  740c                 je 0x4a10ae
// 004a10a2  8b4608               mov eax, dword ptr [esi + 8]
// 004a10a5  2bc1                 sub eax, ecx
// 004a10a7  c1f802               sar eax, 2
// 004a10aa  3bf8                 cmp edi, eax
// 004a10ac  7206                 jb 0x4a10b4
// 004a10ae  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a10b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a10b7  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 004a10ba  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a10be  5f                   pop edi
// 004a10bf  8910                 mov dword ptr [eax], edx
// 004a10c1  5e                   pop esi
// 004a10c2  8bc3                 mov eax, ebx
// 004a10c4  5b                   pop ebx
// 004a10c5  59                   pop ecx
// 004a10c6  c3                   ret 

struct BoundFuncDesc {
    void* function;
    void* construct(void* out, int a, int b);
};

struct ArgList {
    void* begin;
    void* end;
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void __stdcall sub_49F9A0(void* out, int a, int b);

ArgList* __cdecl sub_586610();

void* BoundFuncDesc::construct(void* out, int a, int b) {
    int local = 0;
    sub_49F9A0(&local, 5, 1);
    ArgList* list = sub_586610();
    unsigned int index = (unsigned int)out;
    if (list->begin == 0 || index >= ((char*)list->end - (char*)list->begin) / 4) {
        _invalid_parameter_noinfo();
    }
    *(int*)&local = ((int*)list->begin)[index];
    *(int*)out = local;
    return this;
}
