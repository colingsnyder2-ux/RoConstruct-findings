// from server: 57% by colin
// roc 2007-08 0045d350  unit: Scintilla::CScintillaView  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d350
//
// 0045d350  6a01                 push 1
// 0045d352  83c158               add ecx, 0x58
// 0045d355  e8d6ebffff           call 0x45bf30
// 0045d35a  85c0                 test eax, eax
// 0045d35c  7416                 je 0x45d374
// 0045d35e  b97ca58800           mov ecx, 0x88a57c
// 0045d363  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0045d369  84c0                 test al, al
// 0045d36b  7507                 jne 0x45d374
// 0045d36d  b801000000           mov eax, 1
// 0045d372  eb02                 jmp 0x45d376
// 0045d374  33c0                 xor eax, eax
// 0045d376  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045d37a  8b11                 mov edx, dword ptr [ecx]
// 0045d37c  89442404             mov dword ptr [esp + 4], eax
// 0045d380  8b02                 mov eax, dword ptr [edx]
// 0045d382  ffe0                 jmp eax

struct CScintillaView {
    char pad[0x58];
    int field_58;
    int sub_45bf30(int);
    int method();
};

extern "C" int __stdcall sub_77dcd0(int);
extern int G_88a57c;

int CScintillaView::method()
{
    int result = 0;
    if (sub_45bf30(1) != 0)
    {
        if (sub_77dcd0((int)&G_88a57c) == 0)
            result = 1;
    }
    int* p = (int*)((char*)this + 4);
    int v = *p;
    *p = result;
    return (*(int(**)(void))v)();
}
