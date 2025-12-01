#include "cabecalhos.hpp"

// a estrutura abaixo se trata do mercado como um todo.
// resumindo, vai ser a estrutura completa do mercado.

struct MERCADO{

    struct MENU{
        const array<string, 10> menu {"Hortifruti","Carnes","Frios","Mercearia","Padaria","Bebidas","Higiene","Utensilios","Papelaria","Pet shop"};
    }MENU;

    struct HORTIFRUTI{
        const array<string, 10> setor_FRUTAS = {"Maçã", "Maçã verde", "Banana", "Laranja", "Manga", "Uva", "Morango", "Abacaxi", "Pera", "Melancia"};
        const array<string, 10> setor_LEGUMES = {"Tomate", "Cenoura", "Batata", "Abóbora", "Beterraba", "Chuchu", "Pepino", "Pimentão", "Berinjela", "Quiabo"};
        const array<string, 10> setor_VERDURAS = {"Alface", "Couve", "Espinafre", "Rúcula", "Acelga", "Repolho", "Salsa", "Cebolinha", "Agrião", "Hortelã"};
        
    } HORTIFRUTI;

    struct CARNES{
        const array<string, 10> setor_CARNES_BOVINA = {"Patinho", "Alcatra", "Picanha", "Coxão mole", "Coxão duro", "Acém", "Maminha", "Fraldinha", "Filé mignon", "Costela bovina"};
        const array<string, 10> setor_CARNES_SUINAS = {"Lombo suíno", "Costela suína", "Pernil", "Linguiça toscana", "Linguiça calabresa", "Bisteca suína", "Barriga suína", "Picanha suína", "Joelho suíno", "Carne moída suína"};
        const array<string, 10> setor_CARNES_AVES = {"Peito de frango", "Coxa de frango", "Sobrecoxa de frango", "Asa de frango", "Frango inteiro", "Filé de peito", "Coração de frango", "Moela de frango", "Tulipa de frango", "Drumet"};
        const array<string, 10> setor_CARNES_PEIXES = {"Tilápia", "Salmão", "Merluza", "Atum", "Sardinha", "Bacalhau", "Tambaqui", "Dourado", "Pescada", "Corvina"};
        const array<string, 10> setor_CARNES_FRUTOS_DO_MAR = {"Camarão", "Lula", "Polvo", "Mariscos", "Vieiras", "Mexilhão", "Kani", "Ostra", "Lagosta", "Caranguejo"};
        
    } CARNES;

    struct FRIOS{
        const array<string, 10> setor_QUEIJOS = {"Queijo muçarela", "Queijo prato", "Queijo cheddar", "Queijo parmesão", "Queijo minas", "Queijo gorgonzola", "Queijo provolone", "Queijo coalho", "Queijo ricota", "Queijo brie"};
        const array<string, 10> setor_EMBUTIDOS = {"Presunto", "Mortadela", "Peito de peru", "Salame", "Lombo canadense", "Linguiça defumada", "Blanquet de peru", "Apresuntado", "Rosbife", "Pastrami"};
        const array<string, 10> setor_LATICINIOS = {"Leite integral", "Leite desnatado", "Iogurte natural", "Iogurte saborizado", "Creme de leite", "Manteiga", "Requeijão", "Coalhada", "Chantilly", "Leite fermentado"};
    } FRIOS;

    struct MERCEARIA{
        const array<string, 10> setor_GRAOS_CEREAIS =  {"Arroz", "Feijão carioca", "Feijão preto", "Lentilha", "Grão-de-bico", "Farinha de trigo", "Farinha de mandioca", "Farinha de milho", "Aveia", "Milho para pipoca"};
        const array<string, 10> setor_MASSAS =  {"Macarrão espaguete", "Macarrão parafuso", "Macarrão penne", "Macarrão ninho", "Lasanha seca", "Talharim", "Cuscuz", "Miojo", "Capeletti seco", "Ravioli seco"};
        const array<string, 10> setor_BISCOITOS =  {"Biscoito água e sal", "Biscoito cream cracker", "Bolacha recheada", "Wafer", "Biscoito doce amanteigado", "Rosquinhas", "Salgadinho", "Biscoito maisena", "Torradas", "Cookies"};
        const array<string, 10> setor_CONSERVAS =  {"Milho enlatado", "Ervilha enlatada", "Atum enlatado", "Sardinha enlatada", "Extrato de tomate", "Molho de tomate", "Azeitonas", "Palmito", "Seleta de legumes", "Grão-de-bico em conserva"};
        const array<string, 10> setor_CONDIMENTOS =  {"Sal", "Açúcar", "Óleo de soja", "Azeite", "Vinagre", "Pimenta-do-reino", "Cominho", "Orégano", "Curry", "Caldo de galinha"};
    }MERCEARIA;

    struct PADARIA{
        const array<string, 10> setor_PAES = {"Pão francês", "Pão de forma", "Pão integral", "Pão doce", "Pão australiano", "Pão ciabatta", "Pão baguete", "Pão sírio", "Pão brioche", "Pão sovado"};
        const array<string, 10> setor_BOLOS = {"Bolo de chocolate", "Bolo de fubá", "Bolo de cenoura", "Bolo de milho", "Bolo inglês", "Bolo mesclado", "Bolo de laranja", "Bolo de coco", "Bolo gelado", "Bolo de banana"};
        const array<string, 10> setor_DOCES = {"Sonho", "Rosquinha doce", "Croissant doce", "Pastel de belém", "Churros", "Brownie", "Torta doce", "Cookie", "Carolinas", "Bombas recheadas"};
        const array<string, 10> setor_SALGADOS = {"Coxinha", "Pastel assado", "Empada", "Quibe", "Enroladinho de presunto e queijo", "Pão de queijo", "Esfirra", "Croissant salgado", "Bolinho de carne", "Folhado salgado"};
        const array<string, 10> setor_FRESCOS = {"Baguete fresquinha", "Pão integral fresco", "Broinha de milho", "Pão multigrãos", "Pão caseiro", "Pão de milho fresco", "Pão d’água", "Pão rústico", "Pão italiano", "Pão artesanal"};
    }PADARIA;

    struct BEBIBAS{
        const array<string, 10> setor_REFRIGERANTES = {"Coca-Cola", "Guaraná", "Fanta laranja", "Fanta uva", "Sprite", "Pepsi", "Soda limonada", "Tônica", "Refrigerante de limão", "Refrigerante de cola zero"};
        const array<string, 10> setor_SUCOS = {"Suco de laranja", "Suco de uva", "Suco de maçã", "Suco de maracujá", "Suco de manga", "Suco de goiaba", "Suco de abacaxi", "Suco de pêssego", "Suco detox", "Suco de acerola"};
        const array<string, 10> setor_AGUAS = {"Água mineral", "Água com gás", "Água sem gás", "Água saborizada", "Água alcalina", "Água de coco", "Água mineral premium", "Água tônica zero", "Água mineral pequena", "Água mineral grande"};
        const array<string, 10> setor_CERVEJAS = {"Cerveja pilsner", "Cerveja lager", "Cerveja IPA", "Cerveja APA", "Cerveja stout", "Cerveja weiss", "Cerveja puro malte", "Cerveja artesanal", "Chopp", "Cerveja sem álcool"};
        const array<string, 10> setor_VINHOS = {"Vinho tinto seco", "Vinho tinto suave", "Vinho branco seco", "Vinho branco suave", "Vinho rosé", "Vinho frisante", "Vinho espumante", "Vinho do porto", "Vinho chileno", "Vinho argentino"};
        const array<string, 10> setor_OUTRAS = {"Energético", "Chá gelado", "Café pronto", "Achocolatado", "Isotônico", "Kombucha", "Sidra", "Hard seltzer", "Licor", "Vodka"};
    }BEBIDAS;

    struct HIGIENE{
        const array<string, 10> setor_CASA = {"Detergente", "Sabão em pó", "Sabão líquido", "Desinfetante", "Água sanitária", "Limpador multiuso", "Amaciante", "Limpa vidro", "Desengordurante", "Esponja de limpeza"};
        const array<string, 10> setor_PESSOAL = {"Sabonete", "Shampoo", "Condicionador", "Creme dental", "Escova de dentes", "Desodorante", "Fio dental", "Papel higiênico", "Enxaguante bucal", "Sabonete líquido"};
        const array<string, 10> setor_COSMETICOS = {"Creme hidratante", "Protetor solar", "Gel para cabelo", "Perfume", "Creme facial", "Base de maquiagem", "Batom", "Demaquilante", "Óleo capilar", "Esfoliante"};
        const array<string, 10> setor_LIMPEZA = {"Vassoura", "Rodo", "Pano de chão", "Balde", "Mop", "Escova de limpeza", "Luvas de borracha", "Flanela", "Saco de lixo", "Pá de lixo"};
        const array<string, 10> setor_DESCARTAVEIS = {"Guardanapos", "Pratos descartáveis", "Copos descartáveis", "Talheres descartáveis", "Toalhas de papel", "Panos umedecidos", "Luvas descartáveis", "Sacos ziplock", "Formas de alumínio", "Papel filme"};
    }HIGIENE;

    struct UTENSILIOS{
        const array<string, 10> setor_PANELAS = {"Panela de pressão", "Panela antiaderente", "Caçarola", "Frigideira", "Wok", "Panela de alumínio", "Panela de ferro", "Chaleira", "Leiteira", "Tacho"};
        const array<string, 10> setor_TALHERES = {"Garfo", "Faca", "Colher", "Colher de sobremesa", "Colher de chá", "Espátula", "Concha", "Pegador de massa", "Faca de serra", "Faca de cozinha"};
        const array<string, 10> setor_PRATOS = {"Prato raso", "Prato fundo", "Prato de sobremesa", "Tigela pequena", "Tigela média", "Tigela grande", "Travessa", "Bowl", "Assadeira de vidro", "Assadeira de alumínio"};
        const array<string, 10> setor_COPOS = {"Copo de vidro", "Copo americano", "Taça de vinho", "Taça de espumante", "Caneca cerâmica", "Copo plástico", "Copo térmico", "Jarra de suco", "Garrafa térmica", "Copo medidor"};
        const array<string, 10> setor_COZINHA = {"Escorredor de macarrão", "Ralador", "Peneira", "Abridor de latas", "Tábua de corte", "Descascador", "Moedor de alho", "Funil", "Espremedor de frutas", "Formas de bolo"};
    }UTENSILIOS;

    
    struct PAPELARIA{
        const array<string, 10> setor_ESCOLAR = {"Caderno", "Lápis", "Borracha", "Caneta azul", "Caneta preta", "Canetinha", "Estojo", "Régua", "Lápis de cor", "Apontador"};
        const array<string, 10> setor_ESCRITORIO = {"Grampeador", "Caixa de grampos", "Clips", "Post-it", "Pasta catálogo", "Envelope pardo", "Fita adesiva", "Tesoura", "Bloco de anotações", "Calculadora"};
        const array<string, 10> setor_PAPEIS = {"Papel sulfite A4", "Papel sulfite A3", "Papel cartão", "Papel kraft", "Papel fotográfico", "Papel seda", "Papel vegetal", "Papel canson", "Papel glossy", "Papel timbrado"};
        const array<string, 10> setor_ARQUIVOS = {"Pastas plásticas", "Pasta sanfonada", "Organizador de mesa", "Porta-canetas", "Arquivo morto", "Fichário", "Separadores", "Caixa organizadora", "Porta-documentos", "Identificadores adesivos"};
        const array<string, 10> setor_ARTE = {"Tinta guache", "Pincel", "Lápis aquarelável", "Caneta permanente", "Marcador para quadro branco", "Carvão para desenho", "Tinta acrílica", "Stencil", "Bloco de desenho", "Esponja artística"};
    }PAPELARIA;


    struct PET_SHOP{
        const array<string, 10> setor_RACAO = {"Ração para cachorro adulto", "Ração para cachorro filhote", "Ração para gato adulto", "Ração para gato filhote", "Ração premium", "Ração super premium", "Ração úmida para cães", "Ração úmida para gatos", "Petiscos para cães", "Petiscos para gatos"};
        const array<string, 10> setor_ACESSORIOS = {"Coleira", "Guia", "Peitoral", "Comedouro", "Bebedouro", "Brinquedo de borracha", "Arranhador", "Caminha", "Casinha", "Transportadora"};
        const array<string, 10> setor_HIGIENE = {"Shampoo para pets", "Condicionador para pets", "Areia sanitária", "Tapete higiênico", "Lenços umedecidos pet", "Escova para pelos", "Corta-unhas", "Perfume pet", "Antipulgas", "Pá de areia"};
        const array<string, 10> setor_SAUDE = {"Vermífugo", "Suplemento vitamínico", "Ração medicamentada", "Pasta dental pet", "Escova dental pet", "Colírio veterinário", "Pomada cicatrizante pet", "Probióticos pet", "Soro oral pet", "Protetor solar para pets"};
        const array<string, 10> setor_ANIMAIS_PEQUENOS = {"Ração para peixes", "Filtro de aquário", "Pedras decorativas", "Plantas artificiais", "Ração para hamster", "Serragem para roedores", "Bebedouro para roedores", "Gaiola para pássaros", "Ração para pássaros", "Banheira para pássaros"};
    }PET_SHOP;


}MERCADO; std::unique_ptr<struct MERCADO> mercado = std::make_unique<struct MERCADO>();