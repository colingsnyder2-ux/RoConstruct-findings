// from server: 100% by king_originala
// roc 2008-06 00437c90  unit: RBX::VBrickColor::?$XItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437c90
//
// 00437c90  56                   push esi
// 00437c91  57                   push edi
// 00437c92  8d44240c             lea eax, [esp + 0xc]
// 00437c96  8bf1                 mov esi, ecx
// 00437c98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00437c9c  50                   push eax
// 00437c9d  e87ee41700           call 0x5b6120
// 00437ca2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00437ca6  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00437cab  8b16                 mov edx, dword ptr [esi]
// 00437cad  8b92e4000000         mov edx, dword ptr [edx + 0xe4]
// 00437cb3  c1e108               shl ecx, 8
// 00437cb6  0fb6fc               movzx edi, ah
// 00437cb9  0bcf                 or ecx, edi
// 00437cbb  0fb6c0               movzx eax, al
// 00437cbe  c1e108               shl ecx, 8
// 00437cc1  0bc8                 or ecx, eax
// 00437cc3  51                   push ecx
// 00437cc4  8bce                 mov ecx, esi
// 00437cc6  ffd2                 call edx
// 00437cc8  5f                   pop edi
// 00437cc9  5e                   pop esi
// 00437cca  c20400               ret 4

struct Color {
    void convert(unsigned long* output);
};

struct Item {
    virtual void v0(), v1(), v2(), v3(), v4(), v5(), v6(), v7();
    virtual void v8(), v9(), v10(), v11(), v12(), v13(), v14(), v15();
    virtual void v16(), v17(), v18(), v19(), v20(), v21(), v22(), v23();
    virtual void v24(), v25(), v26(), v27(), v28(), v29(), v30(), v31();
    virtual void v32(), v33(), v34(), v35(), v36(), v37(), v38(), v39();
    virtual void v40(), v41(), v42(), v43(), v44(), v45(), v46(), v47();
    virtual void v48(), v49(), v50(), v51(), v52(), v53(), v54(), v55();
    virtual void v56();
    virtual void setColor(unsigned long value);
    void apply(Color* color);
};

void Item::apply(Color* color)
{
    color->convert(reinterpret_cast<unsigned long*>(&color));
    unsigned char* bytes = reinterpret_cast<unsigned char*>(&color);
    setColor((((unsigned long)bytes[2] << 8) | bytes[1]) << 8 | bytes[0]);
}
