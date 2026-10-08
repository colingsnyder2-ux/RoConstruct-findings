// from server: 93% by colin
// roc 2007-08 00414700  unit: DHTMLWindow  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414700
//
// 00414700  56                   push esi
// 00414701  8bf1                 mov esi, ecx
// 00414703  e8c8901500           call 0x56d7d0
// 00414708  6a08                 push 8
// 0041470a  8906                 mov dword ptr [esi], eax
// 0041470c  e8e5b72100           call 0x62fef6
// 00414711  83c404               add esp, 4
// 00414714  85c0                 test eax, eax
// 00414716  7418                 je 0x414730
// 00414718  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041471c  c70098717800         mov dword ptr [eax], 0x787198
// 00414722  8b11                 mov edx, dword ptr [ecx]
// 00414724  895004               mov dword ptr [eax + 4], edx
// 00414727  894604               mov dword ptr [esi + 4], eax
// 0041472a  8bc6                 mov eax, esi
// 0041472c  5e                   pop esi
// 0041472d  c20400               ret 4
// 00414730  33c0                 xor eax, eax
// 00414732  894604               mov dword ptr [esi + 4], eax
// 00414735  8bc6                 mov eax, esi
// 00414737  5e                   pop esi
// 00414738  c20400               ret 4

struct DHTMLWindow {
    int f(void*);
};

extern "C" int __cdecl sub_0056D7D0();
extern "C" void* __cdecl sub_0062FEF6(unsigned int);

int DHTMLWindow::f(void* arg)
{
    int v = sub_0056D7D0();
    *(int*)this = v;
    void* p = sub_0062FEF6(8);
    if (p != 0) {
        *(int*)p = 0x787198;
        *(int*)((char*)p + 4) = *(int*)arg;
        *(int*)((char*)this + 4) = (int)p;
    } else {
        *(int*)((char*)this + 4) = 0;
    }
    return (int)this;
}
