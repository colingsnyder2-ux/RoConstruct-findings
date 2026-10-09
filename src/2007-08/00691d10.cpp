// from server: 67% by colin
// roc 2007-08 00691d10  unit: CXTThemeManagerStyle  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691d10
//
// 00691d10  51                   push ecx
// 00691d11  56                   push esi
// 00691d12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00691d16  57                   push edi
// 00691d17  8d442408             lea eax, [esp + 8]
// 00691d1b  8d7904               lea edi, [ecx + 4]
// 00691d1e  50                   push eax
// 00691d1f  56                   push esi
// 00691d20  8bcf                 mov ecx, edi
// 00691d22  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00691d2a  e8156e0a00           call 0x738b44
// 00691d2f  85c0                 test eax, eax
// 00691d31  7519                 jne 0x691d4c
// 00691d33  53                   push ebx
// 00691d34  8bce                 mov ecx, esi
// 00691d36  e8f1e7f9ff           call 0x63052c
// 00691d3b  56                   push esi
// 00691d3c  8bcf                 mov ecx, edi
// 00691d3e  89442410             mov dword ptr [esp + 0x10], eax
// 00691d42  8bd8                 mov ebx, eax
// 00691d44  e86f6c0a00           call 0x7389b8
// 00691d49  8918                 mov dword ptr [eax], ebx
// 00691d4b  5b                   pop ebx
// 00691d4c  8b442408             mov eax, dword ptr [esp + 8]
// 00691d50  5f                   pop edi
// 00691d51  5e                   pop esi
// 00691d52  59                   pop ecx
// 00691d53  c20400               ret 4

struct CXTThemeManagerStyle {
    char pad[4];
    int field4;
    int method(int* key);
};

extern "C" int __stdcall sub_738b44(int* map, int* key, int* out);
extern "C" int __stdcall sub_7389b8(int* map, int* key);
extern "C" int __stdcall sub_63052c(int key);

int CXTThemeManagerStyle::method(int* key)
{
    int result = 0;
    if (sub_738b44(&field4, key, &result) == 0)
    {
        int v = sub_63052c(*key);
        result = v;
        int* slot = (int*)sub_7389b8(&field4, key);
        *slot = v;
    }
    return result;
}
