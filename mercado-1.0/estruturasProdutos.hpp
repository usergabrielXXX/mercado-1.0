#include "cabecalhos.hpp"

// a estrutura abaixo se trata do mercado como um todo.
// resumindo, vai ser a estrutura completa do mercado.

struct MERCADO{

    struct MENU{
        const array<string, 10> menu {"Hortifruti","Carnes","Frios","Mercearia","Padaria","Bebidas","Higiene","Utensilios","Papelaria","Pet shop"};
    }MENU;

    struct HORTIFRUTI{
        // 10 frutas, 10 legumes, 10 verduras
        const array<string, 30> setor_FLV = {"Maçã", "Maçã verde", "Banana", "Laranja", "Manga", "Uva", "Morango", "Abacaxi", "Pera", "Melancia", "Alface", "Couve", "Espinafre", "Rúcula", "Acelga", "Repolho", "Salsa", "Cebolinha", "Agrião", "Hortelã", "Tomate", "Cenoura", "Batata", "Abóbora", "Beterraba", "Chuchu", "Pepino", "Pimentão", "Berinjela", "Quiabo"};
    } HORTIFRUTI;

    struct CARNES{
        // 10 bovino, 10 suinos, 10 aves, 10 peixes, 10 frutos do mar
        const array<string, 50> setor_CARNES = {"Patinho", "Alcatra", "Picanha", "Coxão mole", "Coxão duro", "Acém", "Maminha", "Fraldinha", "Filé mignon", "Costela bovina","Lombo suíno", "Costela suína", "Pernil", "Linguiça toscana", "Linguiça calabresa", "Bisteca suína", "Barriga suína", "Picanha suína", "Joelho suíno", "Carne moída suína","Peito de frango", "Coxa de frango", "Sobrecoxa de frango", "Asa de frango", "Frango inteiro", "Filé de peito", "Coração de frango", "Moela de frango", "Tulipa de frango", "Drumet","Tilápia", "Salmão", "Merluza", "Atum", "Sardinha", "Bacalhau", "Tambaqui", "Dourado", "Pescada", "Corvina","Camarão", "Lula", "Polvo", "Mariscos", "Vieiras", "Mexilhão", "Kani", "Ostra", "Lagosta", "Caranguejo"};
    } CARNES;

    struct FRIOS{
        // 10 queijos, 10 embutidos, 10 laticinios
        const array<string, 30> setor_FRIOS = {"Queijo muçarela", "Queijo prato", "Queijo cheddar", "Queijo parmesão", "Queijo minas", "Queijo gorgonzola", "Queijo provolone", "Queijo coalho", "Queijo ricota", "Queijo brie", "Presunto", "Mortadela", "Peito de peru", "Salame", "Lombo canadense", "Linguiça defumada", "Blanquet de peru", "Apresuntado", "Rosbife", "Pastrami", "Leite integral", "Leite desnatado", "Iogurte natural", "Iogurte saborizado", "Creme de leite", "Manteiga", "Requeijão", "Coalhada", "Chantilly", "Leite fermentado"};
    } FRIOS;

    struct MERCEARIA{
        // 10 grãos, 10 massas, 10 biscoitos, 10 conservas, 10 condimentos
        const array<string, 50> setor_MERCEARIA = {"Arroz", "Feijão carioca", "Feijão preto", "Lentilha", "Grão-de-bico", "Farinha de trigo", "Farinha de mandioca", "Farinha de milho", "Aveia", "Milho para pipoca", "Macarrão espaguete", "Macarrão parafuso", "Macarrão penne", "Macarrão ninho", "Lasanha seca", "Talharim", "Cuscuz", "Miojo", "Capeletti seco", "Ravioli seco", "Biscoito água e sal", "Biscoito cream cracker", "Bolacha recheada", "Wafer", "Biscoito doce amanteigado", "Rosquinhas", "Salgadinho", "Biscoito maisena", "Torradas", "Cookies", "Milho enlatado", "Ervilha enlatada", "Atum enlatado", "Sardinha enlatada", "Extrato de tomate", "Molho de tomate", "Azeitonas", "Palmito", "Seleta de legumes", "Grão-de-bico em conserva", "Sal", "Açúcar", "Óleo de soja", "Azeite", "Vinagre", "Pimenta-do-reino", "Cominho", "Orégano", "Curry", "Caldo de galinha"};
    }MERCEARIA;

    struct PADARIA{        
        //  10 paes, 10 bolos, 10 doces, 10 salgados, 10 frescos
        const array<string, 50> setor_PADARIA = {"Pão francês", "Pão de forma", "Pão integral", "Pão doce", "Pão australiano", "Pão ciabatta", "Pão baguete", "Pão sírio", "Pão brioche", "Pão sovado", "Bolo de chocolate", "Bolo de fubá", "Bolo de cenoura", "Bolo de milho", "Bolo inglês", "Bolo mesclado", "Bolo de laranja", "Bolo de coco", "Bolo gelado", "Bolo de banana", "Sonho", "Rosquinha doce", "Croissant doce", "Pastel de belém", "Churros", "Brownie", "Torta doce", "Cookie", "Carolinas", "Bombas recheadas", "Coxinha", "Pastel assado", "Empada", "Quibe", "Enroladinho de presunto e queijo", "Pão de queijo", "Esfirra", "Croissant salgado", "Bolinho de carne", "Folhado salgado", "Baguete fresquinha", "Pão integral fresco", "Broinha de milho", "Pão multigrãos", "Pão caseiro", "Pão de milho fresco", "Pão d’água", "Pão rústico", "Pão italiano", "Pão artesanal"};
    }PADARIA;

    struct BEBIBAS{
        // 10, refrigerantes, 10 sucos, 10 aguas, 10 cervejas, 10 vinhos, 10 outros
        const array<string, 60> setor_BEBIDAS ={"Coca-Cola", "Guaraná", "Fanta laranja", "Fanta uva", "Sprite", "Pepsi", "Soda limonada", "Tônica", "Refrigerante de limão", "Refrigerante de cola zero","Suco de laranja", "Suco de uva", "Suco de maçã", "Suco de maracujá", "Suco de manga", "Suco de goiaba", "Suco de abacaxi", "Suco de pêssego", "Suco detox", "Suco de acerola","Água mineral", "Água com gás", "Água sem gás", "Água saborizada", "Água alcalina", "Água de coco", "Água mineral premium", "Água tônica zero", "Água mineral pequena", "Água mineral grande","Cerveja pilsner", "Cerveja lager", "Cerveja IPA", "Cerveja APA", "Cerveja stout", "Cerveja weiss", "Cerveja puro malte", "Cerveja artesanal", "Chopp", "Cerveja sem álcool","Vinho tinto seco", "Vinho tinto suave", "Vinho branco seco", "Vinho branco suave", "Vinho rosé", "Vinho frisante", "Vinho espumante", "Vinho do porto", "Vinho chileno", "Vinho argentino","Energético", "Chá gelado", "Café pronto", "Achocolatado", "Isotônico", "Kombucha", "Sidra", "Hard seltzer", "Licor", "Vodka"};
    }BEBIDAS;

    struct HIGIENE{
        // 10 casa, 10 pessoal, 10 cosmesticos, 10 limpeza, 10 descartaveis
        const array<string, 50> setor_HIGIENE = {"Detergente", "Sabão em pó", "Sabão líquido", "Desinfetante", "Água sanitária", "Limpador multiuso", "Amaciante", "Limpa vidro", "Desengordurante", "Esponja de limpeza","Sabonete", "Shampoo", "Condicionador", "Creme dental", "Escova de dentes", "Desodorante", "Fio dental", "Papel higiênico", "Enxaguante bucal", "Sabonete líquido","Creme hidratante", "Protetor solar", "Gel para cabelo", "Perfume", "Creme facial", "Base de maquiagem", "Batom", "Demaquilante", "Óleo capilar", "Esfoliante","Vassoura", "Rodo", "Pano de chão", "Balde", "Mop", "Escova de limpeza", "Luvas de borracha", "Flanela", "Saco de lixo", "Pá de lixo","Guardanapos", "Pratos descartáveis", "Copos descartáveis", "Talheres descartáveis", "Toalhas de papel", "Panos umedecidos", "Luvas descartáveis", "Sacos ziplock", "Formas de alumínio", "Papel filme"};
    }HIGIENE;

    struct UTENSILIOS{
        // 10 panelas, 10 talheres, 10 pratos, 10 copos, 10 cozinha
        const array<string, 50> setor_UTENSILIOS = {"Panela de pressão", "Panela antiaderente", "Caçarola", "Frigideira", "Wok", "Panela de alumínio", "Panela de ferro", "Chaleira", "Leiteira", "Tacho","Garfo", "Faca", "Colher", "Colher de sobremesa", "Colher de chá", "Espátula", "Concha", "Pegador de massa", "Faca de serra", "Faca de cozinha","Prato raso", "Prato fundo", "Prato de sobremesa", "Tigela pequena", "Tigela média", "Tigela grande", "Travessa", "Bowl", "Assadeira de vidro", "Assadeira de alumínio","Copo de vidro", "Copo americano", "Taça de vinho", "Taça de espumante", "Caneca cerâmica", "Copo plástico", "Copo térmico", "Jarra de suco", "Garrafa térmica", "Copo medidor","Escorredor de macarrão", "Ralador", "Peneira", "Abridor de latas", "Tábua de corte", "Descascador", "Moedor de alho", "Funil", "Espremedor de frutas", "Formas de bolo"};
    }UTENSILIOS;

    
    struct PAPELARIA{
        // 10 escolar, 10 escritorio, 10 papeis, 10 arquivos, 10 arte
        const array<string, 50> setor_PAPELARIA = {"Caderno", "Lápis", "Borracha", "Caneta azul", "Caneta preta", "Canetinha", "Estojo", "Régua", "Lápis de cor", "Apontador","Grampeador", "Caixa de grampos", "Clips", "Post-it", "Pasta catálogo", "Envelope pardo", "Fita adesiva", "Tesoura", "Bloco de anotações", "Calculadora","Papel sulfite A4", "Papel sulfite A3", "Papel cartão", "Papel kraft", "Papel fotográfico", "Papel seda", "Papel vegetal", "Papel canson", "Papel glossy", "Papel timbrado","Pastas plásticas", "Pasta sanfonada", "Organizador de mesa", "Porta-canetas", "Arquivo morto", "Fichário", "Separadores", "Caixa organizadora", "Porta-documentos", "Identificadores adesivos","Tinta guache", "Pincel", "Lápis aquarelável", "Caneta permanente", "Marcador para quadro branco", "Carvão para desenho", "Tinta acrílica", "Stencil", "Bloco de desenho", "Esponja artística"};
    }PAPELARIA;


    struct PET_SHOP{
        // 10 ração, 10 acessorios, 10 higiene, 10 saude, 10 animais pequenos
        const array<string, 50> setor_PET_SHOP = {"Ração para cachorro adulto", "Ração para cachorro filhote", "Ração para gato adulto", "Ração para gato filhote", "Ração premium", "Ração super premium", "Ração úmida para cães", "Ração úmida para gatos", "Petiscos para cães", "Petiscos para gatos", "Coleira", "Guia", "Peitoral", "Comedouro", "Bebedouro", "Brinquedo de borracha", "Arranhador", "Caminha", "Casinha", "Transportadora", "Shampoo para pets", "Condicionador para pets", "Areia sanitária", "Tapete higiênico", "Lenços umedecidos pet", "Escova para pelos", "Corta-unhas", "Perfume pet", "Antipulgas", "Pá de areia", "Vermífugo", "Suplemento vitamínico", "Ração medicamentada", "Pasta dental pet", "Escova dental pet", "Colírio veterinário", "Pomada cicatrizante pet", "Probióticos pet", "Soro oral pet", "Protetor solar para pets", "Ração para peixes", "Filtro de aquário", "Pedras decorativas", "Plantas artificiais", "Ração para hamster", "Serragem para roedores", "Bebedouro para roedores", "Gaiola para pássaros", "Ração para pássaros", "Banheira para pássaros"};
    }PET_SHOP;


}MERCADO; std::unique_ptr<struct MERCADO> mercado = std::make_unique<struct MERCADO>();