// from server: 78% by colin
// roc 2007-08 004203b0  unit: CRobloxTreeCtrl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004203b0
//
// 004203b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004203b4  8b542404             mov edx, dword ptr [esp + 4]
// 004203b8  56                   push esi
// 004203b9  8bf1                 mov esi, ecx
// 004203bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004203bf  50                   push eax
// 004203c0  51                   push ecx
// 004203c1  52                   push edx
// 004203c2  8d4e54               lea ecx, [esi + 0x54]
// 004203c5  e8266b2400           call 0x666ef0
// 004203ca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004203cd  8d44240c             lea eax, [esp + 0xc]
// 004203d1  50                   push eax
// 004203d2  51                   push ecx
// 004203d3  ff15f0ed7700         call dword ptr [0x77edf0]
// 004203d9  8b542410             mov edx, dword ptr [esp + 0x10]
// 004203dd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004203e1  52                   push edx
// 004203e2  50                   push eax
// 004203e3  8bce                 mov ecx, esi
// 004203e5  e876f4ffff           call 0x41f860
// 004203ea  5e                   pop esi
// 004203eb  c20c00               ret 0xc

struct CRobloxTreeCtrl {
    char pad[0x20];
    void* field_0x20;
    char pad2[0x54 - 0x24];
    char field_0x54[1];
    void func(int a, int b, int c);
};

extern "C" void __stdcall sub_666EF0(void* self, int a, int b, int c);
extern "C" void __stdcall sub_41F860(void* self, int a, int b);
extern "C" int __stdcall ClientToScreen(void* hwnd, void* point);

void CRobloxTreeCtrl::func(int a, int b, int c) {
    sub_666EF0(field_0x54, a, b, c);
    int local;
    ClientToScreen(field_0x20, &local);
    sub_41F860(this, local, *(int*)&field_0x54);
}
