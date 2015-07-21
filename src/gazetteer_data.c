// Only need these for the in-memory dictionaries
gazetteer_t gazetteer_config[] = {
    {DICTIONARY_ACADEMIC_DEGREE, ADDRESS_NAME},
    {DICTIONARY_AMBIGUOUS_EXPANSION, ADDRESS_ANY},
    {DICTIONARY_BUILDING_TYPE, ADDRESS_NAME | ADDRESS_HOUSE_NUMBER | ADDRESS_STREET | ADDRESS_UNIT},
    {DICTIONARY_COMPANY_TYPE, ADDRESS_NAME},
    {DICTIONARY_CONCATENATED_PREFIX_SEPARABLE, ADDRESS_STREET},
    {DICTIONARY_CONCATENATED_SUFFIX_INSEPARABLE, ADDRESS_STREET},
    {DICTIONARY_CONCATENATED_SUFFIX_SEPARABLE, ADDRESS_STREET},
    {DICTIONARY_DIRECTIONAL, ADDRESS_ANY},
    {DICTIONARY_ELISION, ADDRESS_ANY},
    {DICTIONARY_GIVEN_NAME, ADDRESS_STREET | ADDRESS_NAME},
    {DICTIONARY_LEVEL, ADDRESS_HOUSE_NUMBER | ADDRESS_STREET | ADDRESS_UNIT},
    {DICTIONARY_NO_ADDRESS, ADDRESS_HOUSE_NUMBER | ADDRESS_STREET},
    {DICTIONARY_NULL, ADDRESS_ANY},
    {DICTIONARY_NAMED_ORGANIZATION, ADDRESS_NAME},
    {DICTIONARY_NAMED_PERSON, ADDRESS_NAME | ADDRESS_STREET},
    {DICTIONARY_PERSONAL_SUFFIX, ADDRESS_NAME | ADDRESS_STREET},
    {DICTIONARY_PERSONAL_TITLE, ADDRESS_NAME | ADDRESS_STREET},
    {DICTIONARY_PLACE_NAME, ADDRESS_NAME | ADDRESS_STREET},
    {DICTIONARY_POST_OFFICE, ADDRESS_HOUSE_NUMBER | ADDRESS_STREET},
    {DICTIONARY_QUALIFIER, ADDRESS_STREET},
    {DICTIONARY_STOPWORD, ADDRESS_ANY},
    {DICTIONARY_STREET_TYPE, ADDRESS_STREET},
    {DICTIONARY_SURNAME, ADDRESS_STREET | ADDRESS_NAME},
    {DICTIONARY_SYNONYM, ADDRESS_ANY},
    {DICTIONARY_TOPONYM, ADDRESS_LOCALITY | ADDRESS_ADMIN1 | ADDRESS_ADMIN2 | ADDRESS_ADMIN3 | ADDRESS_ADMIN4 | ADDRESS_ADMIN_OTHER | ADDRESS_NEIGHBORHOOD},
    {DICTIONARY_UNIT, ADDRESS_NAME | ADDRESS_HOUSE_NUMBER | ADDRESS_STREET}
};

#define NUM_DICTIONARY_TYPES sizeof(gazetteer_config) / sizeof(gazetteer_t)
