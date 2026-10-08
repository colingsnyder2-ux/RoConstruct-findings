// from server: 66% by colin
// roc 2007-08 00401fd0  unit: VCWorkspace::?$CComObject  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401fd0
//
// 00401fd0  8b442404             mov eax, dword ptr [esp + 4]
// 00401fd4  57                   push edi
// 00401fd5  33ff                 xor edi, edi
// 00401fd7  85c0                 test eax, eax
// 00401fd9  7502                 jne 0x401fdd
// 00401fdb  5f                   pop edi
// 00401fdc  c3                   ret 
// 00401fdd  8a08                 mov cl, byte ptr [eax]
// 00401fdf  84c9                 test cl, cl
// 00401fe1  7424                 je 0x402007
// 00401fe3  53                   push ebx
// 00401fe4  8a5c2410             mov bl, byte ptr [esp + 0x10]
// 00401fe8  56                   push esi
// 00401fe9  8b35f4ec7700         mov esi, dword ptr [0x77ecf4]
// 00401fef  90                   nop 
// 00401ff0  3acb                 cmp cl, bl
// 00401ff2  740f                 je 0x402003
// 00401ff4  50                   push eax
// 00401ff5  ffd6                 call esi
// 00401ff7  8a08                 mov cl, byte ptr [eax]
// 00401ff9  84c9                 test cl, cl
// 00401ffb  75f3                 jne 0x401ff0
// 00401ffd  5e                   pop esi
// 00401ffe  5b                   pop ebx
// 00401fff  8bc7                 mov eax, edi
// 00402001  5f                   pop edi
// 00402002  c3                   ret 
// 00402003  5e                   pop esi
// 00402004  8bf8                 mov edi, eax
// 00402006  5b                   pop ebx
// 00402007  8bc7                 mov eax, edi
// 00402009  5f                   pop edi
// 0040200a  c3                   ret 

extern "C" char* __stdcall CharNextA(const char*);

char* func_00401fd0(const char* str, char ch)
{
    char* result = 0;
    if (str == 0)
        return result;
    char c = *str;
    if (c == 0)
        return result;
    do {
        if (c == ch) {
            result = (char*)str;
            break;
        }
        str = CharNextA(str);
        c = *str;
    } while (c != 0);
    return result;
}
