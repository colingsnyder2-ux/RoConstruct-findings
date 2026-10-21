// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_ldraw_map_root_native_color_init_scope23ca6a3a55397ba9.cpp

// Candidate translation unit (score above; library headers required).
// Native0046d710. Binary-backed codegen analogue; names from native RTTI.
#pragma include_alias("v8xml/XmlElement.h", "roc_ldraw_native_xml_view2aa2ac60c88538dd.cpp")
#pragma include_alias("v8xml/XmlSerializer.h", "roc_ldraw_native_parser_prefix66bda9c32708866c.cpp")
#include "v8xml/XmlSerializer.h"
#include <fstream>
#include <map>
#include <vector>
#include <cstdlib>

extern const RBX::Name& tag_schema_version;
extern const RBX::Name& tag_color_map;
extern const RBX::Name& tag_color;
extern const RBX::Name& tag_ldraw_code;
extern const RBX::Name& tag_roblox_code;
extern const RBX::Name& tag_part_map;
extern const RBX::Name& tag_part;
extern const RBX::Name& tag_name;
extern const RBX::Name& tag_description;
extern const RBX::Name& tag_ldraw_filename;
extern const RBX::Name& tag_mapping_fidelity;
extern const RBX::Name& tag_roblox_part;
extern const RBX::Name& tag_shape;
extern const RBX::Name& tag_form_factor;
extern const RBX::Name& tag_size_vect3;
extern const RBX::Name& tag_y_offset;

namespace RBX { namespace LDraw2Lua {
class LDraw2RobloxColorMap {
public:
    virtual ~LDraw2RobloxColorMap();
    int ldrawCode,robloxCode;
    LDraw2RobloxColorMap(int,int);
    int getLDrawCode() const { return ldrawCode; }
};
struct NativeRobloxPart {
    int shape,formFactor;
    std::string size,offset;
    NativeRobloxPart(int,int,std::string,std::string);
};
class LDraw2RobloxPartMap {
public:
    virtual ~LDraw2RobloxPartMap();
    std::string name,description,filename;
    int fidelity;
    std::vector<NativeRobloxPart> parts;
    LDraw2RobloxPartMap(std::string,std::string,std::string,int);
    void addPart(const NativeRobloxPart&);
};
class LDraw2RobloxMapRoot {
public:
    virtual ~LDraw2RobloxMapRoot();
    std::string path,version;
    std::map<int,LDraw2RobloxColorMap*> colors;
    std::map<std::string,LDraw2RobloxPartMap*> parts;
    LDraw2RobloxMapRoot(std::string);
    LDraw2RobloxColorMap* findColor(int);
    int readFidelity(std::string);
    int readShape(std::string);
    int readFormFactor(std::string);
    void addPartMap(LDraw2RobloxPartMap*);
};
typedef char NativeRootSize[sizeof(LDraw2RobloxMapRoot)==124?1:-1];
typedef char NativeColorSize[sizeof(LDraw2RobloxColorMap)==12?1:-1];
typedef char NativePartMapSize[sizeof(LDraw2RobloxPartMap)==116?1:-1];
typedef char NativeRobloxPartSize[sizeof(NativeRobloxPart)==64?1:-1];
typedef char NativeTextXmlParserSize[sizeof(TextXmlParser)==72?1:-1];

LDraw2RobloxMapRoot::LDraw2RobloxMapRoot(std::string filename):path(filename) {
    std::ifstream input(path.c_str());
    TextXmlParser parser(input.rdbuf());
    std::auto_ptr<XmlElement> root=parser.parse();
    const XmlElement* item=root->findFirstChildByTag(tag_schema_version);
    if(item) item->value().getValue(version);
    item=root->findFirstChildByTag(tag_color_map);
    if(item) {
        const XmlElement* color=item->findFirstChildByTag(tag_color);
        std::string text;
        while(color) {
            int found=0;
            color->findFirstChildByTag(tag_name);
            item=color->findFirstChildByTag(tag_ldraw_code);
            int ldraw=-1,roblox=-1;
            if(item) { ++found; item->value().getValue(text); ldraw=atoi(text.c_str()); }
            item=color->findFirstChildByTag(tag_roblox_code);
            if(item) { ++found; item->value().getValue(text); roblox=atoi(text.c_str()); }
            if(found==2) {
                LDraw2RobloxColorMap* entry=new LDraw2RobloxColorMap(ldraw,roblox);
                LDraw2RobloxColorMap* previous=findColor(entry->getLDrawCode());
                if(previous) delete previous;
                colors[entry->getLDrawCode()]=entry;
            }
            color=color->nextSibling();
        }
    }
    item=root->findFirstChildByTag(tag_part_map);
    if(item) {
        const XmlElement* part=item->findFirstChildByTag(tag_part);
        while(part) {
            int found=0;
            item=part->findFirstChildByTag(tag_name);
            std::string name("");
            if(item) { ++found; item->value().getValue(name); }
            item=part->findFirstChildByTag(tag_description);
            std::string description("");
            if(item) { ++found; item->value().getValue(description); }
            item=part->findFirstChildByTag(tag_ldraw_filename);
            std::string ldrawFilename("");
            if(item) { ++found; item->value().getValue(ldrawFilename); }
            item=part->findFirstChildByTag(tag_mapping_fidelity);
            std::string fidelityText("");
            int fidelity=2;
            if(item) { ++found; item->value().getValue(fidelityText); fidelity=readFidelity(fidelityText); }
            LDraw2RobloxPartMap* entry=new LDraw2RobloxPartMap(name,description,ldrawFilename,fidelity);
            const XmlElement* child=part->findFirstChildByTag(tag_roblox_part);
            if(child) {
                ++found;
                while(child) {
                    int fields=0;
                    item=child->findFirstChildByTag(tag_shape);
                    std::string text("");
                    int shape=999;
                    if(item) { ++fields; item->value().getValue(text); shape=readShape(text); }
                    item=child->findFirstChildByTag(tag_form_factor);
                    text="";
                    int formFactor=0;
                    if(item) { ++fields; item->value().getValue(text); formFactor=readFormFactor(text); }
                    item=child->findFirstChildByTag(tag_size_vect3);
                    std::string size("");
                    if(item) { ++fields; item->value().getValue(size); }
                    item=child->findFirstChildByTag(tag_y_offset);
                    std::string offset("");
                    if(item) { ++fields; item->value().getValue(offset); }
                    if(fields==4) entry->addPart(NativeRobloxPart(shape,formFactor,size,offset));
                    child=child->nextSibling();
                }
            }
            if(found==5) addPartMap(entry);
            part=part->nextSibling();
        }
    }
}
}}
