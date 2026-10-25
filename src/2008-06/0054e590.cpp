// from server: 100% by king_originala
// roc 2008-06 0054e590  unit: RBX::RenderBase::Mesh  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e590
//
// 0054e590  55                   push ebp
// 0054e591  8bec                 mov ebp, esp
// 0054e593  83ec24               sub esp, 0x24
// 0054e596  894ddc               mov dword ptr [ebp - 0x24], ecx
// 0054e599  8d45f8               lea eax, [ebp - 8]
// 0054e59c  50                   push eax
// 0054e59d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e5a0  e89b0b0000           call 0x54f140
// 0054e5a5  50                   push eax
// 0054e5a6  8d4d0c               lea ecx, [ebp + 0xc]
// 0054e5a9  e82229ffff           call 0x540ed0
// 0054e5ae  0fb6c8               movzx ecx, al
// 0054e5b1  85c9                 test ecx, ecx
// 0054e5b3  7437                 je 0x54e5ec
// 0054e5b5  8d55f0               lea edx, [ebp - 0x10]
// 0054e5b8  52                   push edx
// 0054e5b9  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e5bc  e8ef23ffff           call 0x5409b0
// 0054e5c1  50                   push eax
// 0054e5c2  8d4d14               lea ecx, [ebp + 0x14]
// 0054e5c5  e80629ffff           call 0x540ed0
// 0054e5ca  0fb6c0               movzx eax, al
// 0054e5cd  85c0                 test eax, eax
// 0054e5cf  741b                 je 0x54e5ec
// 0054e5d1  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e5d4  e8c7130000           call 0x54f9a0
// 0054e5d9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e5dc  51                   push ecx
// 0054e5dd  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e5e0  e85b0b0000           call 0x54f140
// 0054e5e5  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e5e8  eb4f                 jmp 0x54e639
// 0054e5ea  eb4d                 jmp 0x54e639
// 0054e5ec  8d5514               lea edx, [ebp + 0x14]
// 0054e5ef  52                   push edx
// 0054e5f0  8d4d0c               lea ecx, [ebp + 0xc]
// 0054e5f3  e82829ffff           call 0x540f20
// 0054e5f8  0fb6c0               movzx eax, al
// 0054e5fb  85c0                 test eax, eax
// 0054e5fd  7423                 je 0x54e622
// 0054e5ff  6a00                 push 0
// 0054e601  8d4de8               lea ecx, [ebp - 0x18]
// 0054e604  51                   push ecx
// 0054e605  8d4d0c               lea ecx, [ebp + 0xc]
// 0054e608  e823190000           call 0x54ff30
// 0054e60d  8b5004               mov edx, dword ptr [eax + 4]
// 0054e610  52                   push edx
// 0054e611  8b00                 mov eax, dword ptr [eax]
// 0054e613  50                   push eax
// 0054e614  8d4de0               lea ecx, [ebp - 0x20]
// 0054e617  51                   push ecx
// 0054e618  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e61b  e800cfffff           call 0x54b520
// 0054e620  ebca                 jmp 0x54e5ec
// 0054e622  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0054e625  52                   push edx
// 0054e626  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054e629  50                   push eax
// 0054e62a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e62d  51                   push ecx
// 0054e62e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0054e631  e8fa60ffff           call 0x544730
// 0054e636  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e639  8be5                 mov esp, ebp
// 0054e63b  5d                   pop ebp
// 0054e63c  c21400               ret 0x14

struct S;

struct Result {
    unsigned int value;
    S *owner;

    bool __thiscall equal(const Result *other);
    bool __thiscall notEqual(const Result *other);
    Result *__thiscall post(Result *result, int);
};

struct S {
    Result *__thiscall begin(Result *result);
    Result *__thiscall end(Result *result);
    void __thiscall clear();
    Result *__thiscall erase(Result *result, Result position);
    Result *__thiscall finish(Result *result, Result position);
    Result *__thiscall f(Result *result, Result first, Result last);
};

#pragma optimize("", off)
Result *S::f(Result *result, Result first, Result last)
{
    Result beginResult;
    Result endResult;
    Result postResult;
    Result eraseResult;

    if (first.equal(begin(&postResult)) &&
        last.equal(end(&endResult))) {
        clear();
        begin(result);
        return result;
    } else {
        while (first.notEqual(&last)) {
            erase(&beginResult, *first.post(&eraseResult, 0));
        }
        finish(result, first);
        return result;
    }
}
#pragma optimize("", on)
