// from server: 96% by EspClaude
// roc 2008-06 004684a0  unit: DxUserInput  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004684a0
//
// 004684a0  83ec14               sub esp, 0x14
// 004684a3  56                   push esi
// 004684a4  57                   push edi
// 004684a5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004684a9  8bf1                 mov esi, ecx
// 004684ab  83ff03               cmp edi, 3
// 004684ae  7506                 jne 0x4684b6
// 004684b0  c6465901             mov byte ptr [esi + 0x59], 1
// 004684b4  eb09                 jmp 0x4684bf
// 004684b6  83ff04               cmp edi, 4
// 004684b9  7504                 jne 0x4684bf
// 004684bb  c6465900             mov byte ptr [esi + 0x59], 0
// 004684bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 004684c3  50                   push eax
// 004684c4  8d4c2424             lea ecx, [esp + 0x24]
// 004684c8  e8039e0a00           call 0x5122d0
// 004684cd  8d4c2424             lea ecx, [esp + 0x24]
// 004684d1  51                   push ecx
// 004684d2  8bce                 mov ecx, esi
// 004684d4  e867efffff           call 0x467440
// 004684d9  8b00                 mov eax, dword ptr [eax]
// 004684db  8b542420             mov edx, dword ptr [esp + 0x20]
// 004684df  33c9                 xor ecx, ecx
// 004684e1  89442418             mov dword ptr [esp + 0x18], eax
// 004684e5  89542410             mov dword ptr [esp + 0x10], edx
// 004684e9  8d442408             lea eax, [esp + 8]
// 004684ed  66894c2414           mov word ptr [esp + 0x14], cx
// 004684f2  33d2                 xor edx, edx
// 004684f4  50                   push eax
// 004684f5  8bce                 mov ecx, esi
// 004684f7  897c240c             mov dword ptr [esp + 0xc], edi
// 004684fb  89742410             mov dword ptr [esp + 0x10], esi
// 004684ff  668954241a           mov word ptr [esp + 0x1a], dx
// 00468504  e8f7f4ffff           call 0x467a00
// 00468509  5f                   pop edi
// 0046850a  5e                   pop esi
// 0046850b  83c414               add esp, 0x14
// 0046850e  c20800               ret 8

// from server: 92% by Espeon
// roc 2008-06 004684a0  unit: DxUserInput  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004684a0
//
// 004684a0  83ec14               sub esp, 0x14
// 004684a3  56                   push esi
// 004684a4  57                   push edi
// 004684a5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004684a9  8bf1                 mov esi, ecx
// 004684ab  83ff03               cmp edi, 3
// 004684ae  7506                 jne 0x4684b6
// 004684b0  c6465901             mov byte ptr [esi + 0x59], 1
// 004684b4  eb09                 jmp 0x4684bf
// 004684b6  83ff04               cmp edi, 4
// 004684b9  7504                 jne 0x4684bf
// 004684bb  c6465900             mov byte ptr [esi + 0x59], 0
// 004684bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 004684c3  50                   push eax
// 004684c4  8d4c2424             lea ecx, [esp + 0x24]
// 004684c8  e8039e0a00           call 0x5122d0
// 004684cd  8d4c2424             lea ecx, [esp + 0x24]
// 004684d1  51                   push ecx
// 004684d2  8bce                 mov ecx, esi
// 004684d4  e867efffff           call 0x467440
// 004684d9  8b00                 mov eax, dword ptr [eax]
// 004684db  8b542420             mov edx, dword ptr [esp + 0x20]
// 004684df  33c9                 xor ecx, ecx
// 004684e1  89442418             mov dword ptr [esp + 0x18], eax
// 004684e5  89542410             mov dword ptr [esp + 0x10], edx
// 004684e9  8d442408             lea eax, [esp + 8]
// 004684ed  66894c2414           mov word ptr [esp + 0x14], cx
// 004684f2  33d2                 xor edx, edx
// 004684f4  50                   push eax
// 004684f5  8bce                 mov ecx, esi
// 004684f7  897c240c             mov dword ptr [esp + 0xc], edi
// 004684fb  89742410             mov dword ptr [esp + 0x10], esi
// 004684ff  668954241a           mov word ptr [esp + 0x1a], dx
// 00468504  e8f7f4ffff           call 0x467a00
// 00468509  5f                   pop edi
// 0046850a  5e                   pop esi
// 0046850b  83c414               add esp, 0x14
// 0046850e  c20800               ret 8

// from server: 90% by king_originala
struct Vector2 {
    float x;
    float y;
};

struct Vector2int16 {
    short x;
    short y;
    Vector2int16(const Vector2&);
    Vector2int16(){}
};

struct S;

struct Event {
    int type;
    S* source;
    Vector2int16 position;
    short zeroX;
    short zeroY;
    Vector2int16 value;
    Event(int t,S* s,const Vector2int16& p,const Vector2int16& v){value=v;position=p;zeroX=0;type=t;source=s;zeroY=0;}
};

struct S {
    char padding[89];
    bool active;

    Vector2int16 getValue();
    void dispatch(const Event&);
    void f(int type, const Vector2& position);
};

void S::f(int type, const Vector2& position)
{
    if (type == 3)
        active = true;
    else if (type == 4)
        active = false;

    Vector2int16 p(position);

    Event event(type,this,p,getValue());
    dispatch(event);
}
