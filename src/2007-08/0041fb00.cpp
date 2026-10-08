// from server: 49% by colin
// roc 2007-08 0041fb00  unit: CSelectionTreeCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fb00
//
// 0041fb00  8b442408             mov eax, dword ptr [esp + 8]
// 0041fb04  85c0                 test eax, eax
// 0041fb06  56                   push esi
// 0041fb07  7504                 jne 0x41fb0d
// 0041fb09  33f6                 xor esi, esi
// 0041fb0b  eb03                 jmp 0x41fb10
// 0041fb0d  8b7004               mov esi, dword ptr [eax + 4]
// 0041fb10  8b442408             mov eax, dword ptr [esp + 8]
// 0041fb14  85c0                 test eax, eax
// 0041fb16  7504                 jne 0x41fb1c
// 0041fb18  33d2                 xor edx, edx
// 0041fb1a  eb03                 jmp 0x41fb1f
// 0041fb1c  8b5004               mov edx, dword ptr [eax + 4]
// 0041fb1f  8b4104               mov eax, dword ptr [ecx + 4]
// 0041fb22  56                   push esi
// 0041fb23  52                   push edx
// 0041fb24  50                   push eax
// 0041fb25  e8d8032100           call 0x62ff02
// 0041fb2a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0041fb30  8b08                 mov ecx, dword ptr [eax]
// 0041fb32  e859f2ffff           call 0x41ed90
// 0041fb37  5e                   pop esi
// 0041fb38  c20800               ret 8

struct CSelectionTreeCtrl {
    void func_0041fb00(int, int);
};

struct Inner {
    int field0;
    int field4;
};

struct Outer {
    char pad[0x94];
    Inner* field94;
};

extern "C" void* __stdcall sub_0062ff02(void*, void*, void*);

struct Helper {
    void sub_0041ed90(void*);
};

void CSelectionTreeCtrl::func_0041fb00(int a, int b)
{
    Inner* p1 = (Inner*)a;
    int v1 = p1 ? p1->field4 : 0;
    Inner* p2 = (Inner*)b;
    int v2 = p2 ? p2->field4 : 0;
    Outer* o = (Outer*)((char*)this + 4);
    void* r = sub_0062ff02(o, (void*)v2, (void*)v1);
    Outer* o2 = (Outer*)r;
    Inner* inner = o2->field94;
    ((Helper*)inner)->sub_0041ed90(*(void**)inner);
}
