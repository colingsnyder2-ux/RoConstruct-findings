// from server: 100% by tester
// roc 2011-06 0058be50  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058be50
//
// 0058be50  8a442404             mov al, byte ptr [esp + 4]
// 0058be54  a28062d100           mov byte ptr [0xd16280], al
// 0058be59  c20400               ret 4

typedef unsigned char BYTE;

BYTE g_value;

struct EventDesc
{
    void set(BYTE value);
};

void EventDesc::set(BYTE value)
{
    g_value = value;
}
