// roc 2010-06 0058e500  unit: RBX::Network::P8Player::?$GetSetImpl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e500
//
// 0058e500  8b442404             mov eax, dword ptr [esp + 4]
// 0058e504  8bd1                 mov edx, ecx
// 0058e506  85c0                 test eax, eax
// 0058e508  7417                 je 0x58e521
// 0058e50a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058e50e  8b09                 mov ecx, dword ptr [ecx]
// 0058e510  51                   push ecx
// 0058e511  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0058e514  8b5210               mov edx, dword ptr [edx + 0x10]
// 0058e517  83c0e4               add eax, -0x1c
// 0058e51a  03c8                 add ecx, eax
// 0058e51c  ffd2                 call edx
// 0058e51e  c20800               ret 8
// 0058e521  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058e525  8b09                 mov ecx, dword ptr [ecx]
// 0058e527  51                   push ecx
// 0058e528  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0058e52b  8b5210               mov edx, dword ptr [edx + 0x10]
// 0058e52e  33c0                 xor eax, eax
// 0058e530  03c8                 add ecx, eax
// 0058e532  ffd2                 call edx
// 0058e534  c20800               ret 8
// copied from an identical function in another client (function ?setValue@?$GetSetImpl@P8Class@@BEABHXZP81@AEXH@Z@@UBEXPAVDescribedBase@@ABH@Z)

// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Codegen analog of reflection GetSetImpl::setValue. The target converts
// DescribedBase* to Class* with "add eax,-0x1c": DescribedBase sits at +0x1c.
// Setter takes the dereferenced 4-byte value. Set member pointer is an 8-byte {fn, adj} pair at +0x10.

class DescribedBase { public: virtual ~DescribedBase(); };
// Bytes preceding DescribedBase in Class, sized from the target's 0x1c adjust.
class Before { public: virtual ~Before(); int words[6]; };
typedef int Value;
class Class : public Before, public DescribedBase {
public:
	const Value& getIt() const;
	void setIt(Value value);
};

class GetSet {
public:
	virtual ~GetSet() {}
	virtual bool isReadOnly() const = 0;
	virtual void setValue(DescribedBase* object, const Value& value) const = 0;
	int reserved;
};

template<typename GetFunction, typename SetFunction>
class GetSetImpl : public GetSet {
	GetFunction get;
	SetFunction set;
public:
	GetSetImpl(GetFunction get, SetFunction set) : get(get), set(set) {}
	virtual bool isReadOnly() const { return false; }
	virtual void setValue(DescribedBase* object, const Value& value) const
	{
		Class* o = (Class*)object;
		(o->*set)(value);
	}
};

template class GetSetImpl<const Value& (Class::*)() const, void (Class::*)(Value)>;