// from server: 100% by king_originala
// roc 2008-06 00542fe0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542fe0
//
// 00542fe0  55                   push ebp
// 00542fe1  8bec                 mov ebp, esp
// 00542fe3  83ec24               sub esp, 0x24
// 00542fe6  894ddc               mov dword ptr [ebp - 0x24], ecx
// 00542fe9  8d45f8               lea eax, [ebp - 8]
// 00542fec  50                   push eax
// 00542fed  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00542ff0  e84bc10000           call 0x54f140
// 00542ff5  50                   push eax
// 00542ff6  8d4d0c               lea ecx, [ebp + 0xc]
// 00542ff9  e8d2deffff           call 0x540ed0
// 00542ffe  0fb6c8               movzx ecx, al
// 00543001  85c9                 test ecx, ecx
// 00543003  7437                 je 0x54303c
// 00543005  8d55f0               lea edx, [ebp - 0x10]
// 00543008  52                   push edx
// 00543009  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054300c  e89fd9ffff           call 0x5409b0
// 00543011  50                   push eax
// 00543012  8d4d14               lea ecx, [ebp + 0x14]
// 00543015  e8b6deffff           call 0x540ed0
// 0054301a  0fb6c0               movzx eax, al
// 0054301d  85c0                 test eax, eax
// 0054301f  741b                 je 0x54303c
// 00543021  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00543024  e8371f0000           call 0x544f60
// 00543029  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054302c  51                   push ecx
// 0054302d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00543030  e80bc10000           call 0x54f140
// 00543035  8b4508               mov eax, dword ptr [ebp + 8]
// 00543038  eb4f                 jmp 0x543089
// 0054303a  eb4d                 jmp 0x543089
// 0054303c  8d5514               lea edx, [ebp + 0x14]
// 0054303f  52                   push edx
// 00543040  8d4d0c               lea ecx, [ebp + 0xc]
// 00543043  e8d8deffff           call 0x540f20
// 00543048  0fb6c0               movzx eax, al
// 0054304b  85c0                 test eax, eax
// 0054304d  7423                 je 0x543072
// 0054304f  6a00                 push 0
// 00543051  8d4de8               lea ecx, [ebp - 0x18]
// 00543054  51                   push ecx
// 00543055  8d4d0c               lea ecx, [ebp + 0xc]
// 00543058  e8d3260000           call 0x545730
// 0054305d  8b5004               mov edx, dword ptr [eax + 4]
// 00543060  52                   push edx
// 00543061  8b00                 mov eax, dword ptr [eax]
// 00543063  50                   push eax
// 00543064  8d4de0               lea ecx, [ebp - 0x20]
// 00543067  51                   push ecx
// 00543068  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054306b  e810170000           call 0x544780
// 00543070  ebca                 jmp 0x54303c
// 00543072  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00543075  52                   push edx
// 00543076  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00543079  50                   push eax
// 0054307a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054307d  51                   push ecx
// 0054307e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00543081  e8aa160000           call 0x544730
// 00543086  8b4508               mov eax, dword ptr [ebp + 8]
// 00543089  8be5                 mov esp, ebp
// 0054308b  5d                   pop ebp
// 0054308c  c21400               ret 0x14

#pragma optimize("", off)

struct S;

struct Result {
    unsigned int value;
    S* owner;

    void __thiscall initialize(unsigned int, S*);
    bool __thiscall equal(const Result&);
    bool __thiscall different(const Result&);
    Result __thiscall advance(int);
};

struct S {
    Result __thiscall begin();
    Result __thiscall end();
    void __thiscall clear();
    Result __thiscall erase(Result);
    Result __thiscall finish(Result);
    Result __thiscall f(Result, Result);
};

Result S::f(Result first, Result last)
{
    if (first.equal(begin()) && last.equal(end())) {
        clear();
        return begin();
    } else {
        while (first.different(last))
            erase(first.advance(0));

        return finish(first);
    }
}
