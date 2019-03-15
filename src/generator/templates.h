/*
 * MIT License
 *
 * Copyright (c) 2019 Alexey Edelev <semlanik@gmail.com>, Tatyana Borisova <tanusshhka@mail.ru>
 *
 * This file is part of qtprotobuf project https://git.semlanik.org/semlanik/qtprotobuf
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the Software
 * without restriction, including without limitation the rights to use, copy, modify,
 * merge, publish, distribute, sublicense, and/or sell copies of the Software, and
 * to permit persons to whom the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#pragma once

#include <unordered_map>
#include <string>
#include <google/protobuf/descriptor.h>

namespace qtprotobuf {
namespace generator {

class Templates {
public:
    static const char *DefaultProtobufIncludesTemplate;
    static const char *PreambleTemplate;
    static const char *InternalIncludeTemplate;
    static const char *ExternalIncludeTemplate;
    static const char *ListModelsIncludeTemplate;
    static const char *UsingQtProtobufNamespaceTemplate;
    static const char *ComplexTypeRegistrationMethodTemplate;
    static const char *ComplexTypeRegistrationTemplate;
    static const char *ComplexListTypeUsingTemplate;
    static const char *NamespaceTemplate;
    static const char *NonProtoClassDefinitionTemplate;
    static const char *ClassDefinitionTemplate;
    static const char *PropertyTemplate;
    static const char *MessagePropertyTemplate;
    static const char *MemberTemplate;
    static const char *PublicBlockTemplate;
    static const char *EnumDefinitionTemplate;
    static const char *EnumFieldTemplate;
    static const char *ConstructorTemplate;
    static const char *CopyConstructorTemplate;
    static const char *MoveConstructorTemplate;
    static const char *CopyFieldTemplate;
    static const char *MoveComplexFieldTemplate;
    static const char *MoveFieldTemplate;
    static const char *AssignmentOperatorTemplate;
    static const char *AssignmentOperatorReturnTemplate;
    static const char *MoveAssignmentOperatorTemplate;
    static const char *EqualOperatorTemplate;
    static const char *EqualOperatorPropertyTemplate;
    static const char *NotEqualOperatorTemplate;
    static const char *GetterTemplate;
    static const char *SetterTemplateSimpleType;
    static const char *SetterTemplateComplexType;
    static const char *SignalsBlockTemplate;
    static const char *SignalTemplate;
    static const char *FieldsOrderingDefinitionContainerTemplate;
    static const char *FieldsOrderingContainerTemplate;
    static const char *FieldOrderTemplate;
    static const char *EnumTemplate;
    static const char *SimpleBlockEnclosureTemplate;
    static const char *SemicolonBlockEnclosureTemplate;
    static const char *EmptyBlockTemplate;
    static const char *ConstructorContentTemplate;
    static const char *DeclareMetaTypeTemplate;
    static const char *DeclareComplexListTypeTemplate;
    static const char *QEnumTemplate;
    static const std::unordered_map<::google::protobuf::FieldDescriptor::Type, std::string> TypeReflection;
};

} //namespace generator
} //namespace qtprotobuf
