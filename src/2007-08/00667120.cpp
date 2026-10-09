// from server: 95% by colin
// roc 2007-08 00667120  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667120
//
// 00667120  53                   push ebx
// 00667121  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 00667127  56                   push esi
// 00667128  57                   push edi
// 00667129  8bf9                 mov edi, ecx
// 0066712b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066712f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00667132  8b5020               mov edx, dword ptr [eax + 0x20]
// 00667135  51                   push ecx
// 00667136  6a07                 push 7
// 00667138  680a110000           push 0x110a
// 0066713d  52                   push edx
// 0066713e  ffd3                 call ebx
// 00667140  8bf0                 mov esi, eax
// 00667142  85f6                 test esi, esi
// 00667144  7425                 je 0x66716b
// 00667146  6a02                 push 2
// 00667148  56                   push esi
// 00667149  8bcf                 mov ecx, edi
// 0066714b  e840eeffff           call 0x665f90
// 00667150  a802                 test al, 2
// 00667152  751f                 jne 0x667173
// 00667154  8b4734               mov eax, dword ptr [edi + 0x34]
// 00667157  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066715a  56                   push esi
// 0066715b  6a07                 push 7
// 0066715d  680a110000           push 0x110a
// 00667162  50                   push eax
// 00667163  ffd3                 call ebx
// 00667165  8bf0                 mov esi, eax
// 00667167  85f6                 test esi, esi
// 00667169  75db                 jne 0x667146
// 0066716b  5f                   pop edi
// 0066716c  5e                   pop esi
// 0066716d  33c0                 xor eax, eax
// 0066716f  5b                   pop ebx
// 00667170  c20400               ret 4
// 00667173  5f                   pop edi
// 00667174  8bc6                 mov eax, esi
// 00667176  5e                   pop esi
// 00667177  5b                   pop ebx
// 00667178  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

struct CRobloxTreeCtrl {
    char pad[0x34];
    void* field_34;
    int method_665f90(void* item, int flag);
    void* method_667120(void* item);
};

void* CRobloxTreeCtrl::method_667120(void* item)
{
    long (__stdcall *send)(void*, unsigned int, unsigned int, long) = SendMessageA;
    void* result;
    void* hwnd = *(void**)((char*)field_34 + 0x20);
    result = (void*)send(hwnd, 0x110a, 7, (long)item);
    while (result != 0) {
        if (method_665f90(result, 2) & 2)
            return result;
        hwnd = *(void**)((char*)field_34 + 0x20);
        result = (void*)send(hwnd, 0x110a, 7, (long)result);
    }
    return 0;
}
