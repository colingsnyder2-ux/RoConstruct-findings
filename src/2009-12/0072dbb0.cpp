// roc 2009-12 0072dbb0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072dbb0
//
// 0072dbb0  8b442404             mov eax, dword ptr [esp + 4]
// 0072dbb4  8bd1                 mov edx, ecx
// 0072dbb6  85c0                 test eax, eax
// 0072dbb8  7410                 je 0x72dbca
// 0072dbba  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0072dbbd  83c0e4               add eax, -0x1c
// 0072dbc0  03c8                 add ecx, eax
// 0072dbc2  8b4208               mov eax, dword ptr [edx + 8]
// 0072dbc5  ffd0                 call eax
// 0072dbc7  c20400               ret 4
// 0072dbca  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0072dbcd  33c0                 xor eax, eax
// 0072dbcf  03c8                 add ecx, eax
// 0072dbd1  8b4208               mov eax, dword ptr [edx + 8]
// 0072dbd4  ffd0                 call eax
// 0072dbd6  c20400               ret 4
// copied from an identical function in another client (function ?getValue@?$GetImpl@P8Class@@BEHXZ@@UBEHPBVDescribedBase@@@Z)

// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Codegen analog of reflection GetImpl/GetSetImpl::getValue. The target converts
// DescribedBase* to Class* with "add eax,-0x1c": DescribedBase sits at +0x1c.
// Get member pointer is an 8-byte {fn, adj} pair at +8; result returned in eax.

class DescribedBase { public: virtual ~DescribedBase(); };
// Bytes preceding DescribedBase in Class, sized from the target's 0x1c adjust.
class Before { public: virtual ~Before(); int words[6]; };
class Class : public Before, public DescribedBase {
public:
	int getIt() const;
};

class GetSet {
public:
	virtual ~GetSet() {}
	virtual int getValue(const DescribedBase* object) const = 0;
	int reserved;
};

template<typename GetFunction>
class GetImpl : public GetSet {
	GetFunction get;
public:
	GetImpl(GetFunction get) : get(get) {}
	virtual int getValue(const DescribedBase* object) const
	{
		Class* o = (Class*)object;
		return (o->*get)();
	}
};

template class GetImpl<int (Class::*)() const>;