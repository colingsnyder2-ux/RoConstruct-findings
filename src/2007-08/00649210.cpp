// from server: 62% by colin
// roc 2007-08 00649210  unit: CXTPCommandBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649210
//
// 00649210  8b442404             mov eax, dword ptr [esp + 4]
// 00649214  85c0                 test eax, eax
// 00649216  8bd1                 mov edx, ecx
// 00649218  7403                 je 0x64921d
// 0064921a  8b4004               mov eax, dword ptr [eax + 4]
// 0064921d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00649221  6a01                 push 1
// 00649223  6aff                 push -1
// 00649225  6aff                 push -1
// 00649227  51                   push ecx
// 00649228  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0064922c  51                   push ecx
// 0064922d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00649231  51                   push ecx
// 00649232  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00649236  51                   push ecx
// 00649237  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064923b  50                   push eax
// 0064923c  e89f970800           call 0x6d29e0
// 00649241  2b4208               sub eax, dword ptr [edx + 8]
// 00649244  8b12                 mov edx, dword ptr [edx]
// 00649246  50                   push eax
// 00649247  52                   push edx
// 00649248  ff154cd07700         call dword ptr [0x77d04c]
// 0064924e  c21800               ret 0x18

extern "C" int __stdcall ImageList_DrawEx(void*, int, void*, int, int, int, int, unsigned int, unsigned int, unsigned int);

struct CXTPCommandBar {
    void* field0;
    int field4;
    int field8;
    int Draw(int, int, int, int, int, int, int);
};

int CXTPCommandBar::Draw(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int v = a1;
    if (v != 0)
        v = *(int*)(v + 4);
    int r = ImageList_DrawEx((void*)a7, v, (void*)a6, a5, a4, a3, a2, 1, (unsigned int)-1, (unsigned int)-1);
    return r - field8;
}
