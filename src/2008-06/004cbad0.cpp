// from server: 47% by atomic.potato
// roc 2008-06 004cbad0  unit: RBX::VInstance::?$NonFactoryProduct  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbad0
//
// 004cbad0  53                   push ebx
// 004cbad1  8bd9                 mov ebx, ecx
// 004cbad3  837b2800             cmp dword ptr [ebx + 0x28], 0
// 004cbad7  747f                 je 0x4cbb58
// 004cbad9  55                   push ebp
// 004cbada  56                   push esi
// 004cbadb  57                   push edi
// 004cbadc  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cbae0  8bcf                 mov ecx, edi
// 004cbae2  e8f9951100           call 0x5e50e0
// 004cbae7  84c0                 test al, al
// 004cbae9  7528                 jne 0x4cbb13
// 004cbaeb  8b4324               mov eax, dword ptr [ebx + 0x24]
// 004cbaee  8b30                 mov esi, dword ptr [eax]
// 004cbaf0  8b4310               mov eax, dword ptr [ebx + 0x10]
// 004cbaf3  8b2d90288000         mov ebp, dword ptr [0x802890]
// 004cbaf9  85c0                 test eax, eax
// 004cbafb  755f                 jne 0x4cbb5c
// 004cbafd  ffd5                 call ebp
// 004cbaff  33c0                 xor eax, eax
// 004cbb01  3b7014               cmp esi, dword ptr [eax + 0x14]
// 004cbb04  7502                 jne 0x4cbb08
// 004cbb06  ffd5                 call ebp
// 004cbb08  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cbb0b  51                   push ecx
// 004cbb0c  8bcf                 mov ecx, edi
// 004cbb0e  e83d981100           call 0x5e5350
// 004cbb13  8bcf                 mov ecx, edi
// 004cbb15  33ed                 xor ebp, ebp
// 004cbb17  e8f4362500           call 0x71f210
// 004cbb1c  8bf0                 mov esi, eax
// 004cbb1e  396b28               cmp dword ptr [ebx + 0x28], ebp
// 004cbb21  762a                 jbe 0x4cbb4d
// 004cbb23  56                   push esi
// 004cbb24  8bcb                 mov ecx, ebx
// 004cbb26  8bfe                 mov edi, esi
// 004cbb28  45                   inc ebp
// 004cbb29  e852f9ffff           call 0x4cb480
// 004cbb2e  8bf0                 mov esi, eax
// 004cbb30  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 004cbb34  740e                 je 0x4cbb44
// 004cbb36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cbb3a  57                   push edi
// 004cbb3b  e8f0f0ffff           call 0x4cac30
// 004cbb40  84c0                 test al, al
// 004cbb42  7405                 je 0x4cbb49
// 004cbb44  3b6b28               cmp ebp, dword ptr [ebx + 0x28]
// 004cbb47  72da                 jb 0x4cbb23
// 004cbb49  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cbb4d  56                   push esi
// 004cbb4e  8bcf                 mov ecx, edi
// 004cbb50  e8fb971100           call 0x5e5350
// 004cbb55  5f                   pop edi
// 004cbb56  5e                   pop esi
// 004cbb57  5d                   pop ebp
// 004cbb58  5b                   pop ebx
// 004cbb59  c20c00               ret 0xc
// 004cbb5c  8b00                 mov eax, dword ptr [eax]
// 004cbb5e  eba1                 jmp 0x4cbb01

struct S {
    char pad0[0x10];
    int field10;
    char pad14[0x10];
    int field24;
    unsigned int field28;
    int method(int, int, int);
    int sub_71f210();
};


extern "C" int __stdcall sub_5e50e0();
extern "C" int __stdcall sub_5e5350(int);
extern "C" int __stdcall sub_4cb480(int);
extern "C" int __stdcall sub_4cac30(int);
extern "C" void __stdcall invalid_parameter_noinfo();

int S::method(int a, int b, int c)
{
    if (field28 == 0)
        return 0;

    int *p = (int *)a;
    if (!sub_5e50e0()) {
        int *esi = (int *)field24;
        esi = (int *)*esi;
        int eax = field10;
        if (eax == 0) {
            invalid_parameter_noinfo();
            eax = 0;
        } else {
            eax = *(int *)eax;
        }
        if (esi == (int *)(eax + 0x14)) {
            invalid_parameter_noinfo();
        }
        sub_5e5350(esi[2]);
    }

    int esi2 = sub_71f210();
    unsigned int ebp = 0;
    int edi = esi2;
    while (ebp < field28) {
        sub_4cb480(esi2);
        esi2 = sub_4cb480(esi2);
        if (edi != b) {
            if (!sub_4cac30(edi)) {
                break;
            }
        }
        ebp++;
    }
    sub_5e5350(esi2);
    return 0;
}
